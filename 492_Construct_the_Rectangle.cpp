class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        int w=floor(sqrt(area));
        for(;w!=0;w--)
        {
            if(area%w==0)
            {
                res.push_back(area/w);
                res.push_back(w);
                break;
            }
        }
        return res;
    }
};
