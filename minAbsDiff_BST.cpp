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


    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL) {return res;}

        vector<int> left = inorderTraversal(root->left);
        res.insert(res.end(), left.begin(), left.end());

        res.push_back(root->val);

        vector<int> right = inorderTraversal(root->right);
        res.insert(res.end(), right.begin(), right.end());


        return res;
    }

    int getMinimumDifference(TreeNode* root) {


        vector<int> arr = inorderTraversal(root);

        int min = abs(arr[1] - arr[0]);

        for (int i = 1 ; i < arr.size() - 1 ; i++ ) {

            if ( abs(arr[i + 1] - arr[i]) < min ) {

                min = abs(arr[i + 1] - arr[i]);
            }

        }


        return min ;
    }





};