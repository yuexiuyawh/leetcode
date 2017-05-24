class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapping;
        for(int i=0;i<nums.size();i++)
        {
            int complement=target-nums[i];
            if(mapping.find(complement)!=mapping.end())
                return {mapping[complement],i};
            mapping[nums[i]]=i;
        }
    }
};



class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int,int> mapping;
        vector<int> result;
        for(int i =0; i< num.size(); i++){
            mapping[num[i]] = i; 
        }
        for(int i = 0; i < num.size(); i++){
            const int gap = target - num[i];
            if(mapping.find(gap) != mapping.end() && mapping[gap] != i){
                result.push_back(i);
                result.push_back(mapping[gap]);
                break;
            }
        }
    return result; 
    }
};
