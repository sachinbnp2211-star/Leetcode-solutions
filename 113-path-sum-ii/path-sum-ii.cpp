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
 void targetsum(TreeNode* root,int targetSum,vector<vector<int>>&vec,vector<int>sum,int total)
 {
    if(root==nullptr)
    {
        return;
    }

    
    sum.push_back(root->val);
    total+=root->val;
    
    if(!root->left&&!root->right&&total==targetSum)
    {
        vec.push_back(sum);
    }
    targetsum(root->left,targetSum,vec,sum,total);
    targetsum(root->right,targetSum,vec,sum,total);

 }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>vec;
        vector<int>sum;
        
        targetsum(root, targetSum,vec,sum,0);
        return vec;
        
    }
};