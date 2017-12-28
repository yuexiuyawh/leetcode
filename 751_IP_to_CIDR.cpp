class Solution {
public:
    
    vector<string> ipToCIDR(string ip, int n) {
        vector<string> res;
        int ip1,ip2,ip3,ip4;
        long ipp;
        int i=0;
        for(ip1=0;ip[i]!='.';++i)
            ip1=ip1*10+ip[i]-'0';
        ++i;
        for(ip2=0;ip[i]!='.';++i)
            ip2=ip2*10+ip[i]-'0';
        ++i;
        for(ip3=0;ip[i]!='.';++i)
            ip3=ip3*10+ip[i]-'0';
        ++i;
        for(ip4=0;i!=ip.size();++i)
            ip4=ip4*10+ip[i]-'0';
        ipp=ip1<<24+ip2<<16+ip3<<8+ip4;
        
        while(n!=0)
        {
            for(i=0;ipp&(1<<i)==0;++i);
            for(int j=0;n>>j!=0;++j);
            int mask=max(32-i,32-j);
            res.push_back(to_string((ipp>>24)&255)+"."+to_string((ipp>>16)&255)+"."+to_string((ipp>>8)&255)+"."
                          +to_string(ipp&255)+"/"+to_string(mask));
            ipp+=pow(2,min(i,j));
            n-=pow(2,min(i,j));
        }
        return res;
    }
};


//超时错误，算法有问题
class Solution {
public:
    
    vector<string> ipToCIDR(string ip, int n) {
        vector<string> res;
        int ip1,ip2,ip3,ip4;
        int i=0;
        for(ip1=0;ip[i]!='.';++i)
            ip1=ip1*10+ip[i]-'0';
        ++i;
        for(ip2=0;ip[i]!='.';++i)
            ip2=ip2*10+ip[i]-'0';
        ++i;
        for(ip3=0;ip[i]!='.';++i)
            ip3=ip3*10+ip[i]-'0';
        ++i;
        for(ip4=0;i!=ip.size();++i)
            ip4=ip4*10+ip[i]-'0';
        
        while(n!=0)
        {
            for(i=0;((1<<i)&ip4)==0;++i);
            if(pow(2,i)<=n)
            {
                res.push_back(to_string(ip1)+"."+to_string(ip2)+"."+to_string(ip3)+"."+to_string(ip4)+"/"+to_string(32-i));
                ip4+=pow(2,i);
                if(ip4>255)
                {
                    ip4=0;
                    ip3+=1;
                    if(ip3>255)
                    {
                        ip3=0;
                        ip2+=1;
                        if(ip2>255)
                        {
                            ip2=0;
                            ip1+=1;
                        }
                    }
                }
                n-=pow(2,i);
            }
            else
            {
                while(n!=0)
                {
                    for(int i=0;pow(2,i)<=n;++i);
                    i-=1;
                    res.push_back(to_string(ip1)+"."+to_string(ip2)+"."+to_string(ip3)+"."+to_string(ip4)+"/"+to_string(32-i));
                    ip4+=pow(2,i);
                    n-=pow(2,i);
                }
            }
        }
        
        
        return res;
    }
};
