class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        int remain;
        vector<int> n;
        string res;
        if(num<0) 
        {
            num=-num;
            res="-";
        }
        while(num)
        {
            remain=num%7;
            num/=7;
            n.push_back(remain);
        }
        for(int i=n.size()-1;i>=0;--i)
            res+=to_string(n[i]);
        return res;
    }
};
