class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first,second,third,last,next;
        if(nums[0]>nums[1])
        {
            first=nums[2]>nums[0]?nums[2]:nums[0];
            second=nums[2]>nums[0]?nums[0]:nums[2]>nums[1]?nums[2]:nums[1];
            third=nums[2]>nums[1]?nums[1]:nums[2];
        }
        else//1>0
        {
            first=nums[2]>nums[1]?nums[2]:nums[1];
            second=nums[2]>nums[1]?nums[1]:nums[2]>nums[0]?nums[2]:nums[0];
            third=nums[2]>nums[0]?nums[0]:nums[2];
        }
        last=third;
        next=second;
        for(int i=3;i<nums.size();++i)
        {
            if(nums[i]>third)
            {
                if(nums[i]<second) third=nums[i];
                else if(nums[i]<first)
                {
                    third=second;
                    second=nums[i];
                }
                else
                {
                    third=second;
                    second=first;
                    first=nums[i];
                }
            }
            if(nums[i]<next)
            {
                if(nums[i]>last)
                    next=nums[i];
                else
                {
                    next=last;
                    last=nums[i];
                }
            }
            
        }
        return max(last*next*first,first*second*third);    
    }
};
