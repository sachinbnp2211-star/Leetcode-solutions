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
void search(TreeNode* root,int &val,TreeNode* &target)
{
    if(root==nullptr)
    {
        return ;
    }
    if(root->val==val)
    {
        target=root;
        
        
    }
     if(root->val>val)
    {
        search(root->left,val,target);

    }
     if(root->val<val){
        search(root->right,val,target);

        
    }

}
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* target=nullptr;
        search(root,val,target);
        return target;
        

        
        
    }
};