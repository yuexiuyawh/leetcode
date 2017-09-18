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
    int cnt=0,left=0;
    void traversal(TreeNode* node)
    {
        if(!node) return;
        if(!node->left&&!node->right&&left==1) cnt+=node->val;
        left=1;
        traversal(node->left);
        left=0;
        traversal(node->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        //if(!root->left&&!root->right) return root->val;
        traversal(root);
        return cnt;
    }
};
