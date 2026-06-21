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
 void dfs(int col,int row,TreeNode* root,vector<tuple<int,int,int>>&v)
 {
    if(root==nullptr)
    {
        return ; 
    }
     
    v.push_back({col,row,root->val});
    dfs(col-1,row+1,root->left,v);
    dfs(col+1,row+1,root->right,v);
    
 }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<tuple<int,int,int>>v;
        int row=0;
        int col=0;
        dfs(col,row,root,v);
        sort(v.begin(),v.end());
        vector<vector<int>>tree;
        vector<int>curr;
        int curr_column=get<0>(v[0]);
        for(auto &[col,row, val] : v)
        {
            if(col!=curr_column)
            { tree.push_back(curr);
                curr.clear();
                curr_column=col;
            }
        
            
                curr.push_back(val);
        }
        tree.push_back(curr);
            
            
        
        return tree;
        
    }
};