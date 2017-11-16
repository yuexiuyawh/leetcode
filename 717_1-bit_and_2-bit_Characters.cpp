//简化
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int lastCharStart=0;
        for(int i=0;i<bits.size();++i)
        {
            lastCharStart=i;
            if(bits[i]==1)
                i+=1;
                
        }
        return lastCharStart==bits.size()-1;
    }
};

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool two_bits=false;
        bool res=false;
        for(int a:bits)
        {
            if(two_bits)
            {
                two_bits=false;
                res=false;
            }    
            else if(a==1)
            {
                two_bits=true;
                res=false;
            }
            else
                res=true;
                
        }
        return res;
    }
};



