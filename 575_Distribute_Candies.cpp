class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        vector<int> mark(200001,0);
        int cnt=0;
        for(int i=0;i<candies.size();++i)
        {
            if(mark[candies[i]+100000]==0)
            {
                mark[candies[i]+100000]=1;
                ++cnt;
            }
        }
        if(cnt>candies.size()/2)
            return candies.size()/2;
        else return cnt;
    }
};
