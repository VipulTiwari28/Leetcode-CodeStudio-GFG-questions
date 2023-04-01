#include <iostream>
using namespace std;

// Tree node
struct Node
{
    int data;
    Node* left, * right;
};

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    pair<bool,int> func(Node* root)
    {
        if(root==NULL)
        {
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        //To check for leaf node because in above case we are unavailable to send the data of the leaf node for sum
        if(root->left==NULL && root->right==NULL)
        {
            pair<bool,int> p = make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> left = func(root->left);
        pair<bool,int> right = func(root->right);
        
        bool leftSum = left.first;
        bool rightSum = right.first;
        
        bool cond = root->data == (left.second+right.second);
        
        pair<bool,int> ans;
        if(leftSum && rightSum && cond)
        {
            ans.first = true;
            ans.second = 2*root->data;
            //because if true the subtree sum = root->data only thats why;
        }
        else{
            ans.first = false;
        }
        return ans;
        
    }
    public:
    bool isSumTree(Node* root)
    {
        return func(root).first;
    }
};