class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt[4]={0,0,0,0};
        for(auto c:moves)
        {
            if(c=='R')
                ++cnt[0];
            else if(c=='L')
                ++cnt[1];
            else if(c=='U')
                ++cnt[2];
            else if(c=='D')
                ++cnt[3];
        }
        if(cnt[0]==cnt[1]&&cnt[2]==cnt[3])
            return true;
        else return false;
    }
};

class Solution {
public:
    bool judgeCircle(string moves) {
        int v=0,h=0;
        for(char c:moves)
        {
            switch(c)
            {
                case 'U': ++v;break;
                case 'D': --v;break;
                case 'R': ++h;break;
                case 'L': --h;break;
            }
        }
        return v==0&&h==0;
    }
};
