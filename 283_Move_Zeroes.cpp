//记录0的个数，顺序前移
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sum=nums.size();
        int cnt=0;
        for(int i=0;i!=sum;i++)
        {
            if(nums[i]==0)
                cnt++;
            else
                nums[i-cnt]=nums[i];
        }
        for(int i=sum-cnt;i!=sum;++i)
            nums[i]=0;
    }
};

//用指针记录位置
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNoZero=0;
        for(int i=0;i!=nums.size();++i)
        {
            if(nums[i]!=0)
                nums[lastNoZero++]=nums[i];
        }
        for(;lastNoZero!=nums.size();++lastNoZero)
        {
            nums[lastNoZero]=0;
        }
    }
};

//直接将非0元素与最前面的0交换
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNoZero=0;
        for(int i=0;i!=nums.size();++i)
        {
            if(nums[i]!=0)
                swap(nums[lastNoZero++],nums[i]);
        }
    }
};
