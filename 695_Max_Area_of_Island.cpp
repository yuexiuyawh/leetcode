class Solution {
public:
    int max=0;
    int sum=0;
    void calculate(vector<vector<int>>& grid,int i,int j)
    {
        if(i>=grid.size()||i<0) return;
        if(j>=grid[i].size()||j<0) return;
        if(grid[i][j]!=0)
        {
            sum++;
            grid[i][j]=0;
            calculate(grid,i-1,j);
            calculate(grid,i,j-1);
            calculate(grid,i,j+1);
            calculate(grid,i+1,j);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i!=grid.size();++i)
        {
            for(int j=0;j!=grid[i].size();++j)
            {
                if(grid[i][j]!=0)
                {
                    calculate(grid,i,j);
                    max=max>sum?max:sum;
                    sum=0;
                }
            }
        }
        return max;
    }
};
