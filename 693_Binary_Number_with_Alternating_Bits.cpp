class Solution {
public:
    bool hasAlternatingBits(int n) {
        int m=0;
        int odd=n%2;
        do
        {
            n>>=1;
            if(odd==n%2)
            {
                m=1;
                break;
            }
            else
                odd=n%2;
        }while(n);
        if(m==1)
            return false;
        else return true;
    }
};
