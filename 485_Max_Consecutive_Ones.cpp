class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int a:nums)
        {
            if(a==1) ++count;
            else 
            {
                if(count>max)
                    max=count;
                count=0;
            }
        }
        if(count>max)
            max=count;
        return max;
    }
};
