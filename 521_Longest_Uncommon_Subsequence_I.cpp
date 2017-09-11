class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a.compare(b)==0)
            return -1;
        else return a.size()>b.size()?a.size():b.size();
    }
};
