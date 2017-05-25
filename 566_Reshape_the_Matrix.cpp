class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c!=nums.size()*nums[0].size())
            return nums;
        vector<vector<int>> res(r);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int k=i*c+j;
                res[i].push_back(nums[k/nums[0].size()][k%nums[0].size()]);
            }
        }
        return res;
    }
};

//队列
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c!=nums.size()*nums[0].size())
            return nums;
        vector<vector<int>> res(r);
        queue<int> q;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                q.push(nums[i][j]);
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                res[i].push_back(q.front());
                q.pop();
            }
        }
        return res;
    }
};

//直接赋值
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(r*c!=nums.size()*nums[0].size())
            return nums;
        vector<vector<int>> res(r,vector<int>(c));
        int row=0,col=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[0].size();j++)
            {
                res[row][col]=nums[i][j];
                col++;
                if(col==c)
                {
                    col=0;
                    row++;
                }
            }
        }
        return res;
    }
};
