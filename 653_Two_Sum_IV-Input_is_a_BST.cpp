//广度优先搜索
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
    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> m;
        queue<TreeNode*> q;
        q.push(root);
        bool mark=false;
        while(q.size())
        {
            TreeNode* t=q.front();
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            if(m[k-t->val]==1)
            {
                mark=true;
                break;
            }
            else
                m[t->val]=1;
        }
        return mark;
    }
};
