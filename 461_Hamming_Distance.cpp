class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y,count=0;
        while(z)
        {
            if(z&1) count++;
            z>>=1;
        }
        return count;
    }
};

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        for(int i=0;x!=0||y!=0;i++)
        {
            int m=x%2;
            int n=y%2;
            if(m!=n) count++;
            x/=2;
            y/=2;
        }
        return count;
    }
};
