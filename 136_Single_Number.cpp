//unordered_map
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        int res;
        for(int a:nums)
        {
            if(m[a]==1)
                m[a]=0;
            else m[a]=1;
        }
        for(int a:nums)
        {
            if(m[a]==1)
            {
                res=a;
                break;
            }  
        }
        return res;
    }
};


//异或
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int a:nums)
            res^=a;
        return res;
    }
};
