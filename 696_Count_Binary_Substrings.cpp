class Solution {
public:
    int countBinarySubstrings(string s) {
        int sum[2]={0,0};
        int res=0;
        char now=s[0];
        for(char c:s)
        {
            if(c==now)
                ++sum[c-'0'];
            else
            {
                res+=min(sum[0],sum[1]);
                now=c;
                sum[c-'0']=1;
            }
        }
        res+=min(sum[0],sum[1]);
        return res;
    }
};
