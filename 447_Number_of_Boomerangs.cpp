class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res=0;
        for(int i=0;i!=points.size();++i)
        {
            unordered_map<int,int> m;
            for(int j=0;j!=points.size();++j)
            {
                if(i==j) continue;
                ++m[pow(points[i].first-points[j].first,2)+pow(points[i].second-points[j].second,2)];
            }
            for(auto i:m)
            {
                res+=i.second*(i.second-1);
            }
        }
        return res;
    }
};


class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res=0;
        unordered_map<int,vector<pair<int,int>>> m;
        for(int i=0;i!=points.size()-1;++i)
        {
            for(int j=i+1;j!=points.size();++j)
            {
                pair<int,int> p(i,j);
                m[pow(points[i].first-points[j].first,2)+pow(points[i].second-points[j].second,2)].push_back(p);
            }
        }
        for(auto i=m.begin();i!=m.end();++i)
        {
            vector<pair<int,int>> v=i->second;
            unordered_map<int,int> mm;
            for(int j=0;j!=v.size();++j)
            {
                ++mm[v[j].first];
                ++mm[v[j].second];
            }
            for(auto j=mm.begin();j!=mm.end();++j)
            {
                int n=j->second;
                res+=n*(n-1);
            }
        }
        
        return res;
    }
};
