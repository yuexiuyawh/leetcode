//动态规划
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> v(s.size()+1,false);
        v[0]=true;
        for(int i=1;i<=s.size();++i)
        {
            for(int j=i-1;j>=0;--j)
            {
                if(v[j])
                {
                    if(find(wordDict.begin(),wordDict.end(),s.substr(j,i-j))!=wordDict.end())
                    {
                        v[i]=true;
                        continue;
                    }
                }
            }
        }
        return v[s.size()];
    }
};
