/**
Given a binary tree, flatten it to a linked list in-place.

For example, given the following tree:
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
    void flatten(TreeNode* root) {
       if(root == NULL) return ;
        if(root->right == NULL and root->left == NULL) return ;
        
       if(root->right == NULL )
       {
           flatten(root->left);
           root->right = root->left ;
           root->left = NULL; 
           return ;
       }
       if(root->left == NULL) 
       {
           flatten(root->right);
           return ;
        }
        
        flatten(root->left);
        flatten(root->right);
        
        TreeNode* cur = root->left;
        
      
        while(cur->right) 
        {
            cur = cur->right;
        }
        
        cur->right = root->right;
        root->right = root->left;
        root->left = NULL;
        
        
        
    }
};