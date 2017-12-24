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
    int res=0;
    int maxlength(TreeNode* root)
    {
        if(!root) return 0;
        int left=maxlength(root->left);
        int right=maxlength(root->right);
        if(left+right>res) res=left+right;
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxlength(root);
        return res;
    }
};
