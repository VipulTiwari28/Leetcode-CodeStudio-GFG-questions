#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>& myStack, int x,int index,int n)
{
    if(index==n)
    {
        myStack.push(x);
        return;
    }
    int t = myStack.top();
    myStack.pop();
    
    insert(myStack,x,index+1,n);
    
    myStack.push(t);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    int n = myStack.size();
    insert(myStack,x,0,n);
    return myStack;
}