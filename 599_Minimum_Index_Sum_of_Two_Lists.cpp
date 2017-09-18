class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> m;
        int sum=INT_MAX;
        vector<string> res;
        for(int i=0;i!=list1.size();++i)
            m[list1[i]]=i;
        for(int i=0;i!=list2.size();++i)
        {
            if(m.count(list2[i]))
            {
                if(m[list2[i]]+i<sum)
                {
                    sum=m[list2[i]]+i;
                    res.clear();
                    res.push_back(list2[i]);
                }
                else if(m[list2[i]]+i==sum)
                    res.push_back(list2[i]);
            }
        }
        return res;
    }
};
