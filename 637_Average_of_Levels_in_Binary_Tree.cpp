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
    void traversal(TreeNode* node,int n,vector<double>* sum,vector<double>* cnt)
    {
        if(node!=NULL)
        {
            if(sum->size()<n+1)
            {
                sum->push_back(0);
                cnt->push_back(0);
            }
            (*sum)[n]+=node->val;
            (*cnt)[n]++;
            ++n;
            traversal(node->left,n,sum,cnt);
            traversal(node->right,n,sum,cnt);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int n=0;
        vector<double> sum;
        vector<double> cnt;
        traversal(root,n,&sum,&cnt);
        vector<double> res;
        for(int i=0;i!=sum.size();++i)
            res.push_back(sum[i]/cnt[i]);
        return res;
    }
};
