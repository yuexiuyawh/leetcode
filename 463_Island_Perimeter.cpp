class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;i!=grid.size();++i)
        {
            for(int j=0;j!=grid[0].size();++j)
            {
                if(grid[i][j]==1)
                {
                    cnt=cnt+4-(i-1>=0?grid[i-1][j]:0)-(i+1>=grid.size()?0:grid[i+1][j])
                        -(j-1>=0?grid[i][j-1]:0)-(j+1>=grid[0].size()?0:grid[i][j+1]);
                }
            }
        }
        return cnt;
    }
};

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt=0,repeat=0;
        for(int i=0;i!=grid.size();++i)
        {
            for(int j=0;j!=grid[i].size();++j)
            {
                if(grid[i][j]==1)
                {
                    ++cnt;
                    if(i!=0&&grid[i-1][j]==1) ++repeat;
                    if(j!=0&&grid[i][j-1]==1) ++repeat;
                }
            }
        }
        return cnt*4-2*repeat;
    }
};
