#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //Topological sort ->Problem

        //Adj list 

        unordered_map<int,vector<int>> adj;

        for(int i = 0 ; i < prerequisites.size() ; i++)
        {
            int u = prerequisites[i][1];
            int v = prerequisites[i][0];

            adj[u].push_back(v);
        }

        //Indegree 
        vector<int> indegree(numCourses,0);

        for(int i = 0 ; i < numCourses ; i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }

        queue<int> q;
        //queue push courses with indegree = 0;

        for(int i = 0 ; i < numCourses ; i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }

        int cnt = 0;
        
        while(!q.empty())
        {
            int top = q.front();
            
            cnt++;

            q.pop();

            for(auto it:adj[top])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }

        if(cnt==numCourses)return true;

        return false; 

         
    }
};