class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(!ops.size()) return m*n;
        int a,b;
        a=ops[0][0];
        b=ops[0][1];
        for(int i=1;i!=ops.size();++i)
        {
            if(ops[i][0]<a)
                a=ops[i][0];
            if(ops[i][1]<b)
                b=ops[i][1];
        }
        return a*b;
    }
};

//简化
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int a=m;
        int b=n;
        for(auto o:ops)
        {
            a=min(a,o[0]);
            b=min(b,o[1]);
        }
        return a*b;
    }
};
