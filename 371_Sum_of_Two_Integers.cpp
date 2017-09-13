class Solution {
public:
    int getSum(int a, int b) {
        int add=a^b;
        int c=(a&b)<<1;
        if(c!=0)
            return getSum(add,c);
        else return add;
    }
};
