#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
  public:
    bool dfsDetect(unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsCall,vector<int> adj[],int index)
    {
        visited[index] = true;
        
        for(auto j : adj[index])
        {
            if(visited[j] && dfsCall[j])
            {
                return true;
            }
            else if(!visited[j])
            {
                visited[j] = true;
                dfsCall[j] = true;
                bool ans = dfsDetect(visited,dfsCall,adj,j);
                dfsCall[j] = false;
                if(ans)
                {
                    return true;
                }
            }
        }
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        unordered_map<int,bool> visited;
        unordered_map<int,bool> dfsCall;
        //here we need to keep the record of the recursive call as well in order to check for the cycle
        // reason is that we are going to the very end of a direction but if we reach a point which has been
        // already called therefore cycle is present in that
        for(int i = 0 ; i < V ; i++)
        {
            if(!visited[i])
            {
                dfsCall[i] = true;
                bool ans = dfsDetect(visited,dfsCall,adj,i);
                dfsCall[i] = false;
                if(ans)
                {
                    return true;
                }
            }
        }
        return false;
    }
};