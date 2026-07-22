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
 void Inorder(TreeNode*root,vector<int>&ans)
 {
    if(root==nullptr)
    {
        return;
    }
    Inorder(root->left,ans);
    ans.push_back(root->val);
    Inorder(root->right,ans);
    
 }
 vector<int> hash(TreeNode*root)
 {
    vector<int>ans;
    Inorder(root,ans);
    return ans;
 }

    bool findTarget(TreeNode* root, int k) {
       vector<int>vec= hash(root);
        unordered_set<int>sum;

        for(int val:vec)
        {
            int complement=k-val;
            if(sum.find(complement)!=sum.end())
            {
                return true;
            }
            sum.insert(val);
        }
        return false;


        
    }
};