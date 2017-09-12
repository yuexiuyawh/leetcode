//set方法
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        set<int> s;
        for(int a:nums)
        {
            s.insert(a);
        }
        set<int>::iterator it;
        for(int i=1;i!=nums.size()+1;++i)
        {
            it=s.find(i);    
            if(it==s.end())    
                res.push_back(i);
        }
        return res;
    }
};

//利用数组元素的正负判断
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i!=nums.size();++i)
        {
            int index=abs(nums[i])-1;
            if(nums[index]>0)
                nums[index]=-nums[index];
        }
        for(int i=0;i!=nums.size();++i)
        {
            if(nums[i]>0)
                res.push_back(i+1);
        }
        return res;
    }
};
