class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> t;
        for(int i=0;i!=nums.size();++i)
            t[nums[i]].push_back(i);
        int cnt=0,res=0;
        for(auto i=t.begin();i!=t.end();++i)
        {
            if(i->second.size()>cnt||i->second.size()==cnt&&i->second.back()-i->second.front()+1<res)
            {
                cnt=i->second.size();
                res=i->second.back()-i->second.front()+1;
            }
        }
        return res;
    }
};

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> times;
        unordered_map<int,int> firstindex;
        unordered_map<int,int> lastindex;
        vector<int> numbers;
        int maxtime=0;
        for(int i=0;i!=nums.size();++i)
        {
            if(firstindex.find(nums[i])==firstindex.end())
                firstindex[nums[i]]=i;
            lastindex[nums[i]]=i;
            if(++times[nums[i]]>maxtime)
            {
                maxtime=times[nums[i]];
                numbers.clear();
                numbers.push_back(nums[i]);
            }
            else if(times[nums[i]]==maxtime)
                numbers.push_back(nums[i]);
        }
        int res=lastindex[numbers[0]]-firstindex[numbers[0]]+1;
        for(int i=1;i<numbers.size();++i)
        {
            res=min(res,lastindex[numbers[i]]-firstindex[numbers[i]]+1);
        }
        return res;
    }
};
