class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> res;
        for(int n:nums1)
            ++m[n];
        for(int n:nums2)
            if(--m[n]>=0) res.push_back(n);
        return res;
    }
};
