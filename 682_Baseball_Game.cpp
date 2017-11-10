class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> score;
        int i=0,sum=0;
        for(string s:ops)
        {
            if(s=="C")
            {
                sum-=score.at(i-1);
                score.pop_back();
                --i;
            }
            else if(s=="D")
            {
                score.push_back(score.at(i-1)*2);
                sum+=score.at(i-1)*2;
                ++i;
            }
            else if(s=="+")
            {
                score.push_back(score.at(i-1)+score.at(i-2));
                sum+=score.at(i-1)+score.at(i-2);
                ++i;
            }
            else
            {
                score.push_back(stoi(s));
                sum+=stoi(s);
                ++i;
            }
        }
        return sum;
    }
};
