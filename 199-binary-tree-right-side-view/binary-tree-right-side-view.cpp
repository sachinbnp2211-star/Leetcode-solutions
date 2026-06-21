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
void rightview(TreeNode* root,int level,vector<int>&vec)
{ if (root==nullptr)
{
    return;
}
  if(level==vec.size())
  {
    vec.push_back(root->val);
  } 
  
  rightview(root->right,level+1,vec);
  rightview(root->left,level+1,vec);


}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>vec;
        rightview(root,0,vec);
        return vec;


        
    }
};