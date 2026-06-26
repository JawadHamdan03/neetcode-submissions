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
  public:

  int count=0;
  int maxCount=0;
  int maxDepth(TreeNode* root)
  {
    if (!root) return count;
    count++;
    maxCount=max(count,maxCount);
    maxDepth(root->left);
    maxDepth(root->right);
    count--;


    return maxCount;
  }
};
