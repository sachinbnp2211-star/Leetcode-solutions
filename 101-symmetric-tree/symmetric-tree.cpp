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
  bool sym(TreeNode*p ,TreeNode*q)
  {
    if(!p&&!q)
    {
        return true;
    }
    if(!q||!p)
    {
        return false;
    }
    if(p->val!=q->val)
        {
            return false;
        }
    return sym(p->right,q->left)&&sym(p->left,q->right);
  }
    bool isSymmetric(TreeNode* root) {
     if( sym(root->left,root->right)==true)
     {
        return true;
     }
     return false;
        
    }
};