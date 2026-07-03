/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 int small(TreeNode* root,int k,int &count,int &value)
 {
    if(root==nullptr)
    {
        return -1;
    }
     small(root->left,k,count,value);
    count++;
    if(count==k)
    {
        value=root->val;
        
        
    }
   
    if(value==0)
    {
        small(root->right,k,count,value);

    }
    return value;
 }
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        int value=0;
        return small(root,k,count,value);
        
        
    }
};