class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<unordered_set<char>> a={{'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P'},
        {'a','A','s','S','d','D','f','F','g','G','h','H','j','J','k','K','l','L'},
        {'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'}};
        int i=0,mark=0;
        vector<string> res;
        for(string s:words)
        {
            if(a[0].find(s[0])!=a[0].end()) i=0;
            else if(a[1].find(s[0])!=a[1].end()) i=1;
            else i=2;
            for(char c:s)
            {
                if(a[i].find(c)==a[i].end()) 
                {
                    mark=1;
                    break;
                    
                }
            }
            if(mark==0)
                res.push_back(s);
            mark=0;
        }
        return res;
    }
};
