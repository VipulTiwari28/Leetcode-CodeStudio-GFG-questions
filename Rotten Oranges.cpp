#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int visited[n][m];
        //({r,c},t)
        int cntfresh = 0;
        queue<pair<pair<int,int>,int>> q;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(grid[i][j]==2)
                {
                    //queue push kar with time == 0
                    q.push({{i,j},0});
                    visited[i][j] = 2;
                }
                else{
                    visited[i][j] = 0;
                    //else the i,j is empty or is fresh tomato
                }

                if(grid[i][j]==1)cntfresh++;
            }
        }
        int tm = 0;
        int delR[] = {-1,+1,0,0}; // for the 4-direction
        int delC[] = {0,0,-1,+1}; 

        int cnt = 0;
        //To check if all the possible tomatoes are rotten or not
        while(!q.empty())
        {

            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            //4 side travser karo
            for(int i = 0 ; i < 4 ; i++)
            {
                int nr = row + delR[i];
                int nc = col + delC[i];
                tm = max(t,tm); // I have to return time at the end only
                if( (nr>=0 && nr<n)&&(nc>=0 && nc<m) &&  visited[nr][nc]==0 && grid[nr][nc]==1)
                {
                    //grid should not be visited and grid should have a fresh tomato
                    q.push({{nr,nc},t+1});
                    visited[nr][nc] = 1;
                    cnt++;
                }
            }

        }

        if(cnt!=cntfresh)return -1;//If all the tomatoes are not rotten

        return tm;
        
    }