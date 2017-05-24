class Solution {
public:
    int findComplement(int num) {
        int mask=1,temp=num;
        while(temp!=0)
        {
            mask<<=1;
            temp>>=1;
        }
        return num^(mask-1);
    }
};

class Solution {
public:
    int findComplement(int num) {
        unsigned int mask=~0;
        while(mask&num) mask<<=1;
        return ~mask&~num;
    }
};

class Solution {
public:
    int findComplement(int num) {
        vector<int> bin(32,0);
        int i=0,res=0;
        if(num==0) return 1;
        for(;num!=0;i++)
        {
            bin[i]=num%2;
            num/=2;
        }
        i--;
        for(;i>=0&&bin[i]==1;i--);
        if(i==-1) return 0;
        for(;i>=0;i--)
        {
            if(bin[i]==0)
                res=2*res+1;
            else res*=2;
        }
        return res;
    }
};
