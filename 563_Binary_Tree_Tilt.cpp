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
    int cnt=0;
    int traversal(TreeNode* node)
    {
        if(!node) return 0;
        int right=traversal(node->right);
        int left=traversal(node->left);
        cnt+=abs(right-left);
        return right+left+node->val;
    }
    int findTilt(TreeNode* root) {
        traversal(root);
        return cnt;
    }
};
