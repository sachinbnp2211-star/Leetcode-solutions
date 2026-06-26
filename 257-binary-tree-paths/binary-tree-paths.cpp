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
 void pathsfinds(TreeNode* root,vector<string>&paths,string p)
 {
    if(root==nullptr)
    { 
         return;
        
    }
    p += to_string(root->val);
    if(!root->left&&!root->right)
    {
        paths.push_back(p);
        return ;
    }
    
    if(!p.empty())
    {
        p+="->";
    }
    
    
    
    pathsfinds(root->left,paths,p);
    
    pathsfinds(root->right,paths,p);


    



 }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        
        if(root==nullptr)
        {
            return paths;
            
        }
        pathsfinds(root,paths,"");
        return paths;
        
    }
};