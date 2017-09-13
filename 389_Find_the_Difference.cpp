//异或方法
class Solution {
public:
    char findTheDifference(string s, string t) {
        char a=t[t.size()-1];
        for(int i=0;i!=s.size();++i)
        {
            a^=s[i]^t[i];
        }
        return a;
    }
};

//unordered_map
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> m;
        for(char c:s)
        {
            m[c]++;
        }
        for(char c:t)
        {
            if(m[c]==0) return c;
            else m[c]--;
        }
    }
};
