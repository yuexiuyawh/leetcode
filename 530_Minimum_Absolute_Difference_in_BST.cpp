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
    void traversal(TreeNode* node,vector<int> &num)
    {
        if(!node) return;
        traversal(node->left,num);
        num.push_back(node->val);
        traversal(node->right,num);
    }
    int getMinimumDifference(TreeNode* root) {
        int min=INT_MAX;
        vector<int> num;
        traversal(root,num);
        for(int i=1;i!=num.size();++i)
        {
            if(num[i]-num[i-1]<min)
                min=num[i]-num[i-1];
        }
        return min;
    }
};

//优化
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
    int res=INT_MAX,lastValue=-1;
    void traversal(TreeNode* node)
    {
        if(!node) return;
        traversal(node->left);
        if(lastValue>=0) res=min(node->val-lastValue,res);
        lastValue=node->val;
        traversal(node->right);
    }
    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        return res;
    }
};
