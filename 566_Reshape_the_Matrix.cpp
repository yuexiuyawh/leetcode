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
