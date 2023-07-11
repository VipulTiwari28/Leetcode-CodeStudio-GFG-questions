#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;

        //Outdegree of a terminal node is zero 
        //And in bfs -> topo sort everything is dealt with indegree
        //Now we will reverse the edges reason being all the safe nodes will have indegree zero as we topo sort 
        //the whole graph and those are not the safe nodes will be automatically discarded

        unordered_map<int,vector<int>> adjR;
        vector<int> indegree(graph.size(),0);

        //reverse kardiya apan ne yaha isko
        for(int i = 0; i < graph.size() ; i++)
        {
            vector<int> temp = graph[i];

            for(auto it:temp)
            {
                adjR[it].push_back(i);
                indegree[i]++;
            }
        }

        //then normal topo sort lagao

        queue<int> q;

        for(int i = 0 ; i < graph.size() ; i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }

        while(!q.empty())
        {
            int top = q.front();

            ans.push_back(top);

            q.pop();

            for(auto it:adjR[top])
            {
                indegree[it]--;
                if(indegree[it]==0)
                    q.push(it);
            }
        }


        sort(ans.begin(),ans.end());
        return ans;


        

    }
};