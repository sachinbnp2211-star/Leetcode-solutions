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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        vector<int>z;
        if(root==nullptr)
        {
            return z;
        }
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* curr=s1.top();
            s2.push(s1.top());
            s1.pop();
            if(curr->left)
            {
                s1.push(curr->left);
            }
            if(curr->right)
            {
                s1.push(curr->right);
            }
            


        }
        
        while(!s2.empty())
        {
            z.push_back(s2.top()->val);
            s2.pop();
        }
        return z;
        
    }
};