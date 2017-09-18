//快排
class Solution {
public:
    void quickSort(vector<int>& v,int begin,int end)
    {
        if(begin>=end) return;
        int last=end;
        int first=begin;
        int key=v[begin];
        while(first<last)
        {
            while(first<last&&v[last]>=key) --last;
            v[first]=v[last];
            while(first<last&&v[first]<=key) ++first;
            v[last]=v[first];
        }
        v[first]=key;
        quickSort(v,begin,first-1);
        quickSort(v,first+1,end);
    }
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int sum=0;
        quickSort(g,0,g.size()-1);
        quickSort(s,0,s.size()-1);
        for(int i=s.size()-1,j=g.size()-1;i>=0;i--)
        {
            while(j>=0&&g[j]>s[i]) --j;
            if(j<0) return sum;
            ++sum;
            --j;
        }
        return sum;
    }
};

//使用自带排序
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,sum=0;
        while(i!=g.size()&&j!=s.size())
        {
            if(g[i]<=s[j])
            {
                ++sum;
                ++i;
                ++j;
            }
            else ++j;
        }
        return sum;
    }
};

//使用优先队列
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int,vector<int>,greater<int> > q_g(g.begin(),g.end());
        priority_queue<int,vector<int>,greater<int> > q_s(s.begin(),s.end());
        while(!q_g.empty()&&!q_s.empty())
        {
            if(q_g.top()<=q_s.top())
            {
                q_g.pop();
                q_s.pop();
            }
            else q_s.pop();
        }
        return g.size()-q_g.size();
    }
};
