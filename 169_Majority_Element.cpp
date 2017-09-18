//map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int half=nums.size()/2;
        for(int n:nums)
        {
            if(++m[n]>half)
                return n;
        }
        return 0;
    }
};

//sort
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

//简化
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int res;
        for(int n:nums)
        {
            if(cnt==0)
            {
                res=n;
                ++cnt;
            }
            else if(res==n) ++cnt;
            else --cnt;
        }
        return res;
    }
};
