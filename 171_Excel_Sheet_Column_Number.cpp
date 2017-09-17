class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(int i=s.size()-1;i>=0;--i)
        {
            sum+=(s[i]-'A'+1)*pow(26,s.size()-1-i);
        }
        return sum;
    }
};

//简化 相当于26进制，Z=A0
class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        for(char c:s)
        {
            sum=sum*26+c-'A'+1;
        }
        return sum;
    }
};
