#include <bits/stdc++.h>
using namespace std;



//minimum spanning tree
//Prim's algorithm

void primMST()
{
    // Step 1:
    //make sure adjaceny list
    
    
    //Step 2:
    //making 3 data structure
    
    vector<int> parent;
    vector<int> weights;
    vector<bool> visited;
    
    for(int i = 0 ; i < V ; i++)
    {
        weights[i]=INT_MAX;
        parent[i] = -1;
        visited[i] = false;
    }
    
    weights[source] = 0;
    
    
    //ALGO starts
    // first find the smallest weight of the node which is not visited -> u
    // make u as visited
    //second traverse the neighbours of U
    //if -> neighbour is not visited and the dist < weights[v]
    //set its parent -> U
    //weights[v] = dist 
    
    for(int i = 0 ; i < V ; i++)
    {
        int mini = INT_MAX;
        int u;
        
        for(int v = 0 ; v < V ; v++)
        {
            if(visited[v]==false && weights[v]<mini)
            {
                u = v;
                mini = weights[v];
            }
        }
        
        
        visited[u] = true;
        
        for(auto nbr:adj[u])
        {
            int v = nbr.first;
            int dist = nbr.second;
            //dist -> distance from 'u' to V
            
            if(visited[v]==false && dist < weights[v])
            {
                weights[v] = dist;
                parent[v] = u;
            }
        }
    }
    
    //return the answer in whichever format you need to return it
    
       
}