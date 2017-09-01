class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
        for(int n:findNums)
        {
            int i=0;
            for(;nums[i]!=n;++i);
            for(;i!=nums.size();++i)
            {
                if(nums[i]>n)
                {
                    res.push_back(nums[i]);
                    break;
                }
            }
            if(i==nums.size()) res.push_back(-1);
        }
        return res;
    }
};


//stack+unordered_map
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int,int> m;
        for(int n:nums)
        {
            while(s.size()&&s.top()<n)
            {
                m[s.top()]=n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> res;
        for(int n:findNums)
            res.push_back(m.count(n)?m[n]:-1);
        return res;
    }
};
