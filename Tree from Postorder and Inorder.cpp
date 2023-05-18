#include <iostream>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

//Function to return a tree created from postorder and inoreder traversals.
int findPos(int in[], int n,int element,int start,int end)
{
    for(int i = start ; i < end+1; i++)
    {
        if(in[i]==element)
            return i;
    }
    return -1;
}
Node* build(int in[],int post[],int n,int &index,int startIndex,int endIndex)
{
    if(index < 0 || startIndex>endIndex)
    {
        return NULL;
    }
    int element = post[index--];
    Node* temp = new Node(element);
    int p = findPos(in,n,element,startIndex,endIndex);
    
    temp->right = build(in,post,n,index,p+1,endIndex);
    
    temp->left = build(in,post,n,index,startIndex,p-1);
    
    return temp;
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int index = n-1;
    Node* root = build(in,post,n,index,0,n-1);
    
    return root;
}