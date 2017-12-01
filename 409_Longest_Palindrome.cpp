class Solution {
public:
    int longestPalindrome(string s) {
        int res=0;
        int odd=0;
        unordered_map<char,int> m;
        for(char c:s)
            ++m[c];
        for(auto i:m)
        {
                if(i.second%2==0)
                    res+=i.second;
                else
                {
                    odd=1;
                    res+=i.second-1;
                }
        }
        return res+odd;
    }
};
