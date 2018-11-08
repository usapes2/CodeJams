/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
// Find the sum of all left leaves in a given binary tree.
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        if (!root) return 0;
        if(root->left and !root->left->left and !root->left->right) return root->left->val+sumOfLeftLeaves(root->right);
        return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        
        
    }
};