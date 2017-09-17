class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        set<int> s;
        vector<int> res;
        for(int n:nums1)
        {
            m[n]=1;
        }
        for(int n:nums2)
        {
            if(m[n]==1)
                s.insert(n);
        }
        for(int n:s)
        {
            res.push_back(n);
        }
        return res;
    }
};

//优化
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(),nums1.end());
        vector<int> res;
        for(int n:nums2)
        {
            if(s.erase(n))
                res.push_back(n);
        }
        return res;
    }
};
