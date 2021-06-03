class Solution {
public:
    vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
    void dfs(int i,int j,vector<vector<int>> &grid,int &area)
    {
        area++;
        grid[i][j]=2;
        for(int k=0;k<dir.size();k++)
        {
            int x=i+dir[k][0];
            int y=j+dir[k][1];
            if(x<grid.size() && y<grid[0].size() && grid[x][y]==1)
                dfs(x,y,grid,area);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int output=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int area=0;
                    dfs(i,j,grid,area);
                    output=max(output,area);  
                }
            }
        }
        return output;
        
    }
};