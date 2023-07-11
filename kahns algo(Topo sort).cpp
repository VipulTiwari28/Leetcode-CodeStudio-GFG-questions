#include <bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
    // Write your code here!
    //kahn's algorithm

    //Adj list

    unordered_map<int,vector<int>> adj;

    for(int i = 0 ; i < graph.size(); i++)
    {
        int u = graph[i][0];
        int v = graph[i][1];

        adj[u].push_back(v);
    }

    //Indegree

    vector<int> indegree(nodes,0);

    for(int i = 0 ; i < nodes ; i++)
    {
        for (auto j : adj[i]) {
            indegree[j]++;
        }
    }

    queue<int> q;

    //queue push element with indegree zero

    for(int i = 0 ; i < nodes ; i++)
    {
      if (indegree[i] == 0) {
        q.push(i);
      }
    }

    vector<int> ans;
    while(!q.empty())
    {
        int top = q.front();

        ans.push_back(top);

        q.pop();

        for(auto j:adj[top])
        {
            //Jaise jaise travserse kar rahe hain us node ki indegree decrement karte jayenge
            indegree[j]--;
            if(indegree[j]==0)
                q.push(j);
        }
    }

    return ans;


}
