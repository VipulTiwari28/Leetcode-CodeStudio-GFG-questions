#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long int solve(int n,vector<long long int> &dp)
{
    if(n==1)
    {
        return 0;
        //cause for 1 element there will be only arrangement possible
    }
    if(n==2)
    {
        return 1; 
    }
    if(dp[n]!=-1)
        return dp[n];
    
    long long int ans = ((n-1) * (solve(n-1,dp) + solve(n-2,dp))) % MOD;

    dp[n] = ans;

    return dp[n];
}

long long int countDerangements(int n) {
    // Write your code here.
    vector<long long int> dp(n+1,-1);

    long long int ans = solve(n,dp);

    return ans;
}