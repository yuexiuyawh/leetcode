class Solution {
public:
    int addDigits(int num) {
        while(num>=10)
        {
            int cnt=0;
            while(num)
            {
                cnt+=num%10;
                num/=10;
            }
            num=cnt;
        }
        return num;
    }
};

//012345678912345678912.....
class Solution {
public:
    int addDigits(int num) {
        return (num-1)%9+1;
    }
};
