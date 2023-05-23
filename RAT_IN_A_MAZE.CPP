#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    bool isSafe(int x,int y,vector<vector<int>> &m,vector<vector<bool>> vis,int n)
    {
        if( (x>=0 && x<n) && (y>=0 && y<n) && m[x][y]!=0 && vis[x][y]!=1 )
        {
            //before making the possible move I am doing the following
            return true;
        }
        return false;
    }
    void solve(int x,int y,vector<vector<int>> &m,vector<vector<bool>> vis,vector<string> &ans,int n,string path)
    {
        if(x==n-1 && y==n-1)
        {
            ans.push_back(path);
            return;
        }
        
        // D,L,R,U
        //4 movements
        //Here I need to check before going down whether that block is visited or not out of bounds or is valid or not
        //Down
        //
        vis[x][y]=1;
        if(isSafe(x+1,y,m,vis,n))
        {
            solve(x+1,y,m,vis,ans,n,path+"D");
        }
        //Left
        if(isSafe(x,y-1,m,vis,n))
        {
            solve(x,y-1,m,vis,ans,n,path+"L");
        }
        //right
        if(isSafe(x,y+1,m,vis,n))
        {
            solve(x,y+1,m,vis,ans,n,path+"R");
        }
        //Up
        if(isSafe(x-1,y,m,vis,n))
        {
            solve(x-1,y,m,vis,ans,n,path+"U");
        }
        vis[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        vector<vector<bool>> vis (n,vector<bool> (n,0));
        string path = "";
        if(m[0][0]==0)
        {
            return ans;
        }
        solve(0,0,m,vis,ans,n,path);
        return ans;
    }
};
