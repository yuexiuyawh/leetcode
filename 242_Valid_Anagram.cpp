class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        for(char c:s)
            ++v[c-'a'];
        for(char c:t)
            if(--v[c-'a']<0) return false;
        for(int n:v)
            if(n>0) return false; //或者在开头加if(s.size()!=t.size()) return false;
        return true;
    }
};
