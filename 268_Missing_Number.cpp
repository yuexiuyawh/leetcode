//位运算
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i!=nums.size();++i)
            sum^=i^nums[i];
        sum^=nums.size();
        return sum;
    }
};

//和之差
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int num=nums.size();
        sum=(1+num)*num/2;
        for(int n:nums)
            sum-=n;
        return sum;
    }
};
