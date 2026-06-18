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
    int widthOfBinaryTree(TreeNode* root) {
       
        if (!root) return 0;

        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});

        long long maxwidth = 0;

        while (!q.empty()) {
            int levelsize = q.size();
            int min=q.front().second;
            
            long long first,last;

            for (int i = 0; i < levelsize; i++) {
                long long u=q.front().second-min;
                TreeNode* curr = q.front().first;
                q.pop();
                if(i==0)
                { first=u;

                }
                if(i==levelsize-1)
                {
                    last=u;
                }

                if (curr->left) q.push({curr->left,(2*u)+1});
                if (curr->right) q.push({curr->right,(2*u)+2});
            }
            maxwidth=max(maxwidth,last-first+1);
        }

        return maxwidth;
        
    }
};