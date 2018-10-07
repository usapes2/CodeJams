// Minimum absolute difference between neighboring nodes
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
    int min = 0;
    
    int getMinimumDifference(TreeNode* root) {
        if(root.left == NULL and root.right == NULL){ // This is leaf
            return root
        }
        
        if (root.left == NULL) {
            
           TreeNode temp = getMinimumDifference(root.right)
               if( abs())
} 
        

        
    }
};
