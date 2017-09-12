//深度优先
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
        if(!root)
            return 0;
        int left=maxDepth(root->left)+1;
        int right=maxDepth(root->right)+1;
        return left>right?left:right;
    }
};

//广度优先
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
        if(!root) return 0;
        queue<TreeNode *> q;
        int cnt=0;
        q.push(root);
        while(q.size())
        {
            ++cnt;
            int k=q.size();
            for(int i=0;i!=k;++i)
            {
                TreeNode* t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            } 
        }
        return cnt;
    }
};
