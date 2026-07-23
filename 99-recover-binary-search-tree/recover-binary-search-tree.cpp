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
  void inorder(TreeNode* root,vector<TreeNode*>&ans)
  {
    if(root==nullptr)
    {
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root);
    inorder(root->right,ans);
  }
  
    void recoverTree(TreeNode* root) {
        vector<TreeNode*>vec;
        inorder(root,vec);
        TreeNode* prev=nullptr;
        
        TreeNode* second=nullptr;

        for(int i=1;i<vec.size();i++)
        {
            if(vec[i]->val<vec[i-1]->val)
            { if(!prev){ prev=vec[i-1];}
            second=vec[i];}

            
        }
        swap(prev->val,second->val);



        
    }
};