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
  TreeNode* Bst(vector<int>& preorder,int &index,int lower,int higher)
  {
    if(preorder.size()<=index)
    {
        return nullptr;
    }
  int val=preorder[index];
  
   if(val<lower||val>higher)
   {
    return nullptr;
   }
   index++;
   TreeNode* root=new TreeNode(val);
   root->left=Bst(preorder,index,lower,val);
   root->right=Bst(preorder,index,val,higher);
   return root;

    
  }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        return Bst(preorder,index,INT_MIN,INT_MAX);

        
        
    }
};