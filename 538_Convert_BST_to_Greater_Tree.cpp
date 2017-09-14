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
    void traversal(TreeNode* root,int &k)
    {
        if(!root) return;
        traversal(root->right,k);
        root->val+=k;
        k=root->val;
        traversal(root->left,k);
    }
    TreeNode* convertBST(TreeNode* root) {
        int k=0;
        traversal(root,k);
        return root;
    }
};

//简化
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
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root)
        {
            convertBST(root->right);
            root->val+=sum;
            sum=root->val;
            convertBST(root->left);
        }
        return root;
    }
};
