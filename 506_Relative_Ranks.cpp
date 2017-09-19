class Solution {
public:
    static bool com(int a,int b)
    {
        return a>b;
    }
    vector<string> findRelativeRanks(vector<int>& nums) {
        if(nums.size()==0) return {};
        unordered_map<int,int> m;
        vector<string> res(nums.size(),"");
        for(int i=0;i!=nums.size();++i)
            m[nums[i]]=i;
        sort(nums.begin(),nums.end(),com);  //sort(nums.begin(),nums.end(),std::greater<int>());
        
        for(int i=0;i!=nums.size();++i)
        {
            if(i==0)
                res[m[nums[i]]]="Gold Medal";
            else if(i==1)
                res[m[nums[i]]]="Silver Medal";
            else if(i==2)
                res[m[nums[i]]]="Bronze Medal";
            else res[m[nums[i]]]=to_string(i+1);
                
        }
        return res;
    }
};


class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> order;
        for(int i=0;i!=nums.size();++i)
            order.push_back(i);
        sort(order.begin(),order.end(),[&nums](int a,int b)->bool{return nums[a]>nums[b];}); //C++11匿名函数 lambda表达式
        vector<string> res(nums.size(),"");
        for(int i=3;i<nums.size();++i)
        {
            res[order[i]]=to_string(i+1);
        }
        if(nums.size()>=1) res[order[0]]="Gold Medal";
        if(nums.size()>=2) res[order[1]]="Silver Medal";
        if(nums.size()>=3) res[order[2]]="Bronze Medal";
        return res;
    }
};
