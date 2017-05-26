//set
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> s;
        for(int i=0;i<candies.size()&&s.size()<candies.size()/2;++i)
        {
            s.insert(candies[i]);
        }
        return s.size();
    }
};
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> s;
        for(int i=0;i<candies.size();++i)
        {
            s.insert(candies[i]);
        }
        return s.size()>candies.size()/2?candies.size()/2:s.size();
    }
};

//简单哈希
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
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_map<int,int> mapping;
        for(int i=0;i<candies.size()&&mapping.size()<candies.size()/2;++i)
        {
            mapping[candies[i]]=1;
        }
        return mapping.size();
    }
};
