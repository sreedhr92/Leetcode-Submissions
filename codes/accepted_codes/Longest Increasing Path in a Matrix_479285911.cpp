class Solution {
public:
    int dfs(vector<vector<int>>& matrix,int i,int j,vector<vector<int>> &steps,vector
        <vector<int>> &dp)
    {
        if(dp[i][j]>0)
            return dp[i][j];
        int m=matrix.size();
        int n=matrix[0].size();
        int output=0;
        for(int k=0;k<4;++k)
        {
            int x=steps[k][0]+i;
            int y=steps[k][1]+j;
            if(x<m && x>=0 && y<n && y>=0 && matrix[x][y]>matrix[i][j])
            {
                output=max(output,dfs(matrix,x,y,steps,dp));
            }
        }
        dp[i][j]=output+1;
        return dp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int output=1;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        vector<vector<int>> steps={{0,1},{1,0},{0,-1},{-1,0}};
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
                output=max(output,dfs(matrix,i,j,steps,dp));
        }
        return output;
    }
};
/*test Case
[[9,9,4],[6,6,8],[2,1,1]]
[[3,4,5],[3,2,6],[2,2,1]]
[[1]]
[[6,8],[7,2]]
[[1,2],[3,4],[5,6]]
[[1,89,9],[2,6,2],[6,8,9],[4,5,8],[1,2,6]]
[[7,7,5],[2,4,6],[8,2,0]]
[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
[[1,2,3],[4,5,6],[7,8,9]]
 [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
[[1,2,3],[4,5,6],[7,8,9]]
[[1,4,7],[2,5,8],[3,6,9]]
[[1,4],[2,5],[3,6]]
[[7,8,9],[9,7,6],[7,2,3]]
*/
