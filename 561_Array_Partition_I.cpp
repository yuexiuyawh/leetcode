//哈希
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        vector<int> hashtable(20001,0);
        for(int i=0;i<nums.size();i++)
            hashtable[nums[i]+10000]++;
        int flag=0,count=0;
        for(int i=0;i<20001;)
        {
            if(hashtable[i]>0&&flag==0)
            {
                count+=i-10000;
                hashtable[i]--;
                flag=1;
            }
            else if(hashtable[i]>0&&flag==1)
            {
                hashtable[i]--;
                flag=0;
            }
            else
                i++;
        }
        return count;
    }
};

//快排
class Solution {
public:
    void sort(vector<int>& nums,int low,int high)
    {
        int midvalue=nums[low];
        int i=low;
        int j=high;
        if(i>=j) return;
        while(i<j)
        {
            while(i<j&&nums[j]>=midvalue)
                j--;
            nums[i]=nums[j];
            while(i<j&&nums[i]<=midvalue)
                i++;
            nums[j]=nums[i];
        }
        nums[i]=midvalue;
        sort(nums,low,i-1);
        sort(nums,i+1,high);
    }
    int arrayPairSum(vector<int>& nums) {
        sort(nums,0,nums.size()-1);
        int count=0;
        for(int i=0;i<nums.size();i+=2)
            count+=nums[i];
        return count;
    }
};

//冒泡排序（运行超时）
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int temp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums.size()-1;j!=i;j--)
            {
                if(nums[j]<nums[j-1])
                {
                    temp=nums[j];
                    nums[j]=nums[j-1];
                    nums[j-1]=temp;
                }
            }
        }
        int count=0;
        for(int i=0;i<nums.size();i+=2)
            count+=nums[i];
        return count;
    }
};
