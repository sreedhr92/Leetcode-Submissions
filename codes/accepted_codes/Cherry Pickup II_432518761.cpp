class Solution {
public:
    int dfs(int row,int col1,int col2,vector<vector<vector<int>>> &dp,int &m,int &n
        ,vector<vector<int>>& grid)
    {
        if (row == m)
            return 0;
        if(dp[row][col1][col2]!=-1)
            return dp[row][col1][col2];
        int cherries;
        if (col1==col2)
            cherries = grid[row][col1];
        else
            cherries = grid[row][col1]+grid[row][col2];
        int next_result = -1;
        for(int i=-1;i<2;i++)
        {
            for(int j=-1;j<2;j++)
            {
                int new_col1 = col1+i;
                int new_col2 = col2+j;
                if((new_col1<n) && (new_col1>=0) && (new_col2<n) && (new_col2>=0))
                    next_result = max(next_result,dfs(row+1,new_col1,new_col2,dp,m,n
                        ,grid)+cherries);
            }
        }
        dp[row][col1][col2] = next_result;
        return next_result;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int> (n,-1)));
        return dfs(0,0,n-1,dp,m,n,grid);
        
        
        
        
    }
};
