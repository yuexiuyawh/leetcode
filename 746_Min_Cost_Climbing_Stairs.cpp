//迭代
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> sum;
        for(int i=0;i!=cost.size();++i)
        {
            if(i==0||i==1)
                sum.push_back(cost[i]);
            else
            {
                sum.push_back(min(sum[i-1],sum[i-2])+cost[i]);
            }
        }
        return min(sum[cost.size()-1],sum[cost.size()-2]);
    }
};

//递归-超时
class Solution {
public:
    int sum(vector<int>& cost,int i)
    {
        if(i==0||i==1)
            return 0;
        return min(sum(cost,i-1)+cost[i-1],sum(cost,i-2)+cost[i-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return sum(cost,cost.size());
    }
};
