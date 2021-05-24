class Solution {
public:
    //unordered_set<vector<int>> path;
    int output=0;
    int m,n;
    void dfs(vector<vector<int>>& obstacleGrid,int i,int j)
    {
        if(i>=m || j>=n || obstacleGrid[i][j])
            return;
        if(i==m-1 && j==n-1)
            output++;
        dfs(obstacleGrid,i+1,j);
        dfs(obstacleGrid,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        m = obstacleGrid.size();
        n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1])
            return 0;
        dfs(obstacleGrid,0,0);       
        return output;
    }
};
