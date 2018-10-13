/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) { int i = 0; return i;}
        
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        if(left <= right) {
            right++;
            return right;} else{
            left++;
            return left;
        }
    }
};