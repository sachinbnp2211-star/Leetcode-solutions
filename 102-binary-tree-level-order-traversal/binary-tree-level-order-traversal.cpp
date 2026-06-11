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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==nullptr)
        {
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>curr;
            int levelsize=q.size();
            for(int i=0;i<levelsize;i++)
            {
                TreeNode* c=q.front();
                q.pop();
                curr.push_back(c->val);
                if(c->left)
                {
                    q.push(c->left);
                }
                if(c->right)
                {
                    q.push(c->right);
                }
                
            }
            res.push_back(curr);

        }
        return res;
        
    }
};