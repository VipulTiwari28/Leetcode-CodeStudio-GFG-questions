#include <iostream>
#include <vector>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    void inOrder(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
    TreeNode* build(vector<int> &ans,int s,int e)
    {
        //Here we got ourselves an inOrder list and we find the mid element and to its left we put the elements to the left of mid
        //element and for right we put the right element.     
        if(s>e)
        {
            return NULL;
        }
        int mid = (s+e)/2 ;
        TreeNode* root = new TreeNode(ans[mid]);
        //new node for the mid element
        root->left = build(ans,s,mid-1);
        root->right = build(ans,mid+1,e);
        return root;

    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inOrder(root,ans);
        TreeNode* temp = build(ans,0,ans.size()-1);

        return temp;
    }
};