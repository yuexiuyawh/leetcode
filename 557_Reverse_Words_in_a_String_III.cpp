class Solution {
public:
    string reverseWords(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                int j;
                for(j=i;j<s.size()&&s[j]!=' ';j++);
                reverse(s.begin()+i,s.begin()+j);
                i=j;
            }
        }
        return s;
    }
};

//堆栈
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
