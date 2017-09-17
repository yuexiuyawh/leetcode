//相当于每次选出最大值减一，直到所有数字都相同
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt=0;
        int min=nums[0];
        for(int i=0;i!=nums.size();++i)
        {
            if(nums[i]<min)
            {
                cnt+=i*(min-nums[i]);
                min=nums[i];
            }
            cnt+=nums[i]-min;  
        }
        return cnt;
    }
};

//优化 总和-（最小值*个数）
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int min=INT_MAX;
        for(int i=0;i!=nums.size();++i)
        {
            sum+=nums[i];
            if(nums[i]<min) min=nums[i];
        }
        return sum-nums.size()*min;
    }
};
