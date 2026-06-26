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
    int maxLength = 0;
    int maxDepth(TreeNode* root)
    {
        traverseTree(root,0);
        return maxLength;
    }

    void traverseTree(TreeNode * root, int count )
    {
        if (!root) return;
        count++;
        maxLength = max(maxLength,count);

        traverseTree(root->left,count);
        traverseTree(root->right,count);
    }

    
};
