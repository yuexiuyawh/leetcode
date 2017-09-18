//map
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> m;
        for(int i=0;i!=numbers.size();++i)
        {
            if(m[numbers[i]]!=0)
                return {m[numbers[i]],i+1};
            else
                m[target-numbers[i]]=i+1;
        }
        return {};
    }
};

//已经排好序了，首位两个指针确定位置
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0,high=numbers.size()-1;
        while(low<high)
        {
            if(numbers[low]+numbers[high]==target)
                break;
            else if(numbers[low]+numbers[high]<target)
                ++low;
            else --high;
        }
        return {low+1,high+1};
    }
};
