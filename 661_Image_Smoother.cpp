class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> res(M);
        for(int i=0;i!=M.size();++i)
            for(int j=0;j!=M[i].size();++j)
            {
                int sum=0;
                int cnt=0;
                for(int a=-1;a!=2;++a)
                    for(int b=-1;b!=2;++b)
                        if(i+a>=0&&i+a<=M.size()-1&&j+b>=0&&j+b<=M[i].size()-1)
                        {
                            sum+=M[i+a][j+b];
                            ++cnt;
                        }
                res[i][j]=floor(sum/cnt);
            }
        return res;
    }
};

//为了节省空间，可以用原vector的8-15位保存新数据，最后统一右移8位
