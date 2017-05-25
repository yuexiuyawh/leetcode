class Solution {
public:
    string reverseWords(string s) {
        stack<char> word;
        int i=0;
        string res;
        while(s[i]!='\0')
        {
            if(s[i]!=' ')
            {
                word.push(s[i]);
            }
            else
            {
                while(!word.empty())
                {
                    res+=word.top();
                    word.pop();
                }
                res+=' ';
            }
            i++;
        }
         while(!word.empty())
        {
            res+=word.top();
            word.pop();
        }
        //res+='\0';
        return res;
    }
};
