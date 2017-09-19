class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int cnt=0;
        char c='I';
        for(int i=s.size()-1;i>=0;--i)
        {
            if(m[s[i]]<m[c])
                cnt-=m[s[i]];
            else
            {
                cnt+=m[s[i]];
                c=s[i];
            }
        }
        return cnt;
    }
};
//Ｉ、Ｖ、Ｘ、Ｌ、Ｃ、Ｄ和Ｍ，分别表示１、５、１０、５０、１００、５００和１０００
