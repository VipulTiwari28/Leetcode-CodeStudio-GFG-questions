#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void deleteMiddle(stack<int>&inputStack, int N){
    if((N+1)%2!=0)
    {
        //odd
        int i = 0;
        vector<int> s;
        while(i<(N+1)/2)
        {
            int t = inputStack.top();
            s.push_back(t);
            inputStack.pop();
            i++;
        }
        inputStack.pop();
        for(int i = s.size()-1; i>=0;i--)
        {
            inputStack.push(s[i]);
        }
    }else{
        int i = 0;
        vector<int> s;
        while(i<((N+1)/2)-1)
        {
            int t = inputStack.top();
            s.push_back(t);
            inputStack.pop();
            i++;
        }
        inputStack.pop();
        for(int i = s.size()-1; i>=0;i--)
        {
            inputStack.push(s[i]);
        }
    }   
}
//2nd better Approach
#include <bits/stdc++.h>
void solve(stack<int>&inputStack, int index,int size)
{
    if(index == size/2){
        inputStack.pop();
        return;
    }
    int t = inputStack.top();
    inputStack.pop();
    solve(inputStack,index+1,size);
    inputStack.push(t);
}
void deleteMiddle(stack<int>&inputStack, int N){
       solve(inputStack,0,N);
}
