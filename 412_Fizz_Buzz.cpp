class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res;
        for(int i=1;i!=n+1;++i)
        {
            if(i%3!=0&&i%5!=0)
                res.push_back(to_string(i));
            else if(i%3==0&&i%5!=0)
                res.push_back("Fizz");
            else if(i%3!=0&&i%5==0)
                res.push_back("Buzz");
            else
                res.push_back("FizzBuzz");
        }
        return res;
    }
};


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for(int i=1;i<=n;++i)
        {
            if(i%3==0)
                res[i-1]+="Fizz";
            if(i%5==0)
                res[i-1]+="Buzz";
            if(res[i-1].size()==0)
                res[i-1]+=to_string(i);
        }
        return res;
    }
};
