class Solution {
public:
    vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
    vector<pair<int,int>> get_next(int &i,int &j,int &m,int &n,vector<vector<int>> &grid)
    {
        vector<pair<int,int>> res;
        for(int k=0;k<4;++k)
        {
            int x = i+dir[k][0];
            int y = j+dir[k][1];
            if(x>=0 and x<m and y>=0 and y<n and grid[x][y]==1)
                res.push_back({x,y});
        }
        return res;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        int nice=0;
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                else if(grid[i][j]==1)
                    nice++;
            }
        }
        if(nice==0)
            return 0;
        int count=0;
        while(!q.empty())
        {
            int level = q.size();
            while(level)
            {
                level--;
                auto [i,j] = q.front();
                q.pop();
                vector<pair<int,int>> temp = get_next(i,j,m,n,grid);
                for(auto k:temp)
                {
                    auto [x,y] = k;
                    grid[x][y] = 2;
                    nice--;
                    q.push({x,y});
                }
            }
            if(!q.empty())count++;
        }
        return nice==0 ? count : -1;
    }
};
/*
[[2,1,1],[1,1,0],[0,1,1]]
[[2,0,2,2,2,0,0,1,2],[1,2,1,1,0,2,2,0,2],[0,0,0,0,1,2,0,1,0],[1,2,2,2,2,2,1,2,0],[2,0,0,0,2,2,2,1,2],[2,1,2,0,1,0,0,2,2],[0,2,2,2,2,0,2,2,2],[1,2,1,1,0,1,1,1,2],[0,0,0,1,1,2,0,1,2],[0,2,2,1,2,1,2,1,1]]
[[2,1,1],[1,1,1],[0,1,2]]
[[2,1,1],[0,1,1],[1,0,1]]
[[0,2]]

*/