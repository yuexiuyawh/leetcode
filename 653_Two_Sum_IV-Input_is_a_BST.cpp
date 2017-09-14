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

//深度优先搜索
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
    bool traversal(TreeNode* root,int k,set<int> *s)
    {
        set<int>::iterator it;
        if(!root) return false;
        it=s->find(root->val);
        if(it!=s->end())
            return true;
        s->insert(k-root->val);
        return traversal(root->left,k,s)||traversal(root->right,k,s);
    }
    bool findTarget(TreeNode* root, int k) {
        set<int> s;
        return traversal(root,k,&s);
    }
};

//指针
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
    void traversal(TreeNode* root,int k,vector<int> &nums)
    {
        if(!root)
            return;
        traversal(root->left,k,nums);
        nums.push_back(root->val);
        traversal(root->right,k,nums);
        return;
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        traversal(root,k,nums);
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==k)
                return true;
            else if(nums[i]+nums[j]<k)
                ++i;
            else 
                --j;
        }
        return false;
    }
};
