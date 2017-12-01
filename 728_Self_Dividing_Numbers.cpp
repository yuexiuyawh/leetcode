class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;++i)
        {
            int temp=i;
            int mark=0;
            while(temp!=0)
            {
                if(temp%10==0||i%(temp%10)!=0)
                {
                    mark=1;
                    break;
                }
                temp/=10;
            }
            if(mark) continue;
            else res.push_back(i);
        }
        return res;
    }
};
