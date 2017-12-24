//简化
class Solution {
public:
    void reverse(string& s, int begin, int end)
    {
        for(;begin<end;++begin,--end)
        {
            char c=s[begin];
            s[begin]=s[end];
            s[end]=c;
        }
    }
    string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i=i+2*k)
            reverse(s,i,min(i+k-1,(int)s.size()-1));
        return s;
    }
};

class Solution {
public:
    string reverseStr(string s, int k) {
        int i;
        for(i=0;2*k*i+k<=s.size();++i)
        {
            int m=i*2*k;
            int n=i*2*k+k-1;
            for(int j=0;j!=k/2;++j)
            {
                char c=s[m];
                s[m]=s[n];
                s[n]=c;
                ++m;
                --n;
            }
        }
        if(i==0||2*k*(i-1)<s.size())
        {
            int m=i*2*k;
            int n=s.size()-1;
            for(;m<n;++m,--n)
            {
                char c=s[m];
                s[m]=s[n];
                s[n]=c;
            }
        }
        return s;
    }
};
