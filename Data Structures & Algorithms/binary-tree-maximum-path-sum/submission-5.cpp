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
public:vector<int> res = {};
int dfs(TreeNode * root)
{
    if (!root)
        return 0;
    int leftMax= dfs(root->left);
    int rightMax= dfs(root->right);

    leftMax=max(leftMax,0);
    rightMax=max(rightMax,0);

    // split
    res[0]=max(res[0],root->val+ leftMax+ rightMax);
    return root->val + max(leftMax,rightMax);
}

int maxPathSum(TreeNode* root)
{
    res.push_back(root->val);
    dfs(root);
    return res[0];
}
};
