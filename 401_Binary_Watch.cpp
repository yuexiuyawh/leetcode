//位运算
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for(int h=0;h<=11;++h)
            for(int m=0;m<=59;++m)
            {
                if(bitset<10>(h<<6|m).count()==num)
                    res.push_back(to_string(h)+":"+(m>9?to_string(m):"0"+to_string(m)));
            }
        return res;
    }
};

//列举
class Solution {
public:
    vector<int> get_hour(int n)
    {
        if(n==0) return{0};
        if(n==1) return{1,2,4,8};
        if(n==2) return{3,5,6,9,10};
        if(n==3) return{7,11};
    }
    vector<int> get_minute(int n)
    {
        int m[]={1,2,4,8,16,32};
        int sum=0;
        for(int a:m)
            sum+=a;
        vector<int> res;
        if(n==0) return {0};
        if(n==1) return {1,2,4,8,16,32};
        if(n==2) 
        {
            for(int i=0;i!=5;++i)
                for(int j=i+1;j!=6;++j)
                    res.push_back(m[i]+m[j]);
        }
        if(n==3) 
        {
            for(int i=0;i!=4;++i)
                for(int j=i+1;j!=5;++j)
                    for(int k=j+1;k!=6;++k)
                    {
                        if(m[i]+m[j]+m[k]>59) break;
                        else res.push_back(m[i]+m[j]+m[k]);
                    }
        }
        if(n==4)
        {
            for(int i=5;i!=0;--i)
                for(int j=i-1;j!=-1;--j)
                {
                    if(sum-m[i]-m[j]>59) break;
                    else res.push_back(sum-m[i]-m[j]);
                }
        }
        if(n==5) return {31,47,55,59};
        return res;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> res;
        for(int i=0;i<=min(num,3);++i)
        {
            vector<int> h=get_hour(i);
            vector<int> m=get_minute(num-i);
            for(int i=0;i!=h.size();++i)
                for(int j=0;j!=m.size();++j)
                    res.push_back(to_string(h[i])+":"+(m[j]<10?"0"+to_string(m[j]):to_string(m[j])));
        }
        return res;
    }
};
