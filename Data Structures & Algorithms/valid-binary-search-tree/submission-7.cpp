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
    bool leftSubtree(TreeNode * root,int val)
    {
        if(!root)
            return true;

        if(root->val>=val)
            return false;
        
        return leftSubtree(root->left,val) and leftSubtree(root->right,val);
    }

    bool rightSubtree(TreeNode * root,int val)
    {
        if(!root)
            return true;

        if(root->val<=val)
            return false;
       
        return rightSubtree(root->left,val) and rightSubtree(root->right,val);
    }

    bool isValidBST(TreeNode* root) {
        if(!root)
            return true;
            
        bool left=leftSubtree(root->left,root->val);
        bool right = rightSubtree(root->right,root->val);

        return left and right and isValidBST(root->left)and isValidBST(root->right);
    }
};
