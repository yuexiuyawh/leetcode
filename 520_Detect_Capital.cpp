class Solution {
public:
    bool detectCapitalUse(string word) {
        int mark=0;
        if(word[0]>='a'&&word[0]<='z')
        {
            for(int i=1;i!=word.size();++i)
            {
                if(word[i]>='A'&&word[i]<='Z')
                {
                    mark=1;
                    break;
                }
            }
            if(mark) return false;
            else return true;
        }
        else if(word.size()==1)
            return true;
        else if(word[1]>='a'&&word[1]<='z')
        {
            for(int i=2;i!=word.size();++i)
            {
                if(word[i]>='A'&&word[i]<='Z')
                {
                    mark=1;
                    break;
                }
            }
            if(mark) return false;
            else return true;
        }
        else
        {
            for(int i=2;i!=word.size();++i)
            {
                if(word[i]>='a'&&word[i]<='z')
                {
                    mark=1;
                    break;
                }
            }
            if(mark) return false;
            else return true;
        }
    }
};



//正则表达式
class Solution {
public:
    bool detectCapitalUse(string word) {
        return regex_match(word,regex("[A-Z]+|[a-z]+|[A-Z][a-z]*"));
    }
};
