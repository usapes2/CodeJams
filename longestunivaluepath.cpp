#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int _hlpr(TreeNode* node, int& curMax) {
	int left = 0;
	if ( node->left ) {left = _hlpr(node->left,curMax);}

	int right = 0;
	if ( node->right) {right = _hlpr(node->right,curMax);}

	int resLeft = 0;
	if ( node->left and node->val == node->left->val){
		resLeft = left + 1;
	}

	int resRight = 0;
	if ( node->right and node->val == node->right->val){
		resRight = right + 1;
	}
	curMax = max(curMax, resRight + resLeft);
	return max(resRight,resLeft);
}

int longestUnivaluePath(TreeNode* root) {
	int curMax = 0;
	if(root) _hlpr(root, curMax);
	return curMax;
}


int main(int argc, const char *argv[])
{

	
	TreeNode root(0);
	TreeNode *ptr = &root;
	TreeNode left(1);
	TreeNode right(1);

	root.left = &left;
	root.right = &right;

	cout << longestUnivaluePath(ptr) <<endl;
	return 0;
}
