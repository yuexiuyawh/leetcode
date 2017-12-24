class Solution {
public:
    bool checkRecord(string s) {
        int absent=0;
        int late=0;
        bool res=true;
        for(char c:s)
        {
            if(c=='A'&&++absent>1)
            {
                res=false;
                break;
            }
            if(c=='L')
            {
                if(++late>2)
                {
                    res=false;
                    break;
                }
            }
            else
                late=0;
        }
        return res;
    }
};
