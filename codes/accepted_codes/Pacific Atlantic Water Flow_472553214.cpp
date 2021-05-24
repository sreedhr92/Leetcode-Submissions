class Solution {
public:
    int m, n;
    // denotes cells reachable starting from atlantic and pacific edged cells 
        respectively
    vector<vector<bool> > atlantic, pacific;
    vector<vector<int> > ans;    
    vector<vector<int> > pacificAtlantic(vector<vector<int>>& mat) {
        if(!size(mat)) return ans;
        m = size(mat), n = size(mat[0]);
        atlantic = pacific = vector<vector<bool> >(m, vector<bool>(n, false));
        // perform dfs from all edge cells (ocean-connected cells)
        for(int i = 0; i < m; i++) dfs(mat, pacific, i, 0), dfs(mat, atlantic, i, n - 
            1);
        for(int i = 0; i < n; i++) dfs(mat, pacific, 0, i), dfs(mat, atlantic, m - 1, 
            i);             
        return ans;
    }
    void dfs(vector<vector<int> >& mat, vector<vector<bool> >& visited, int i, int j
        ){        
        if(visited[i][j]) return;
        visited[i][j] = true;
        // if cell reachable from both the oceans, insert into final answer vector
        if(atlantic[i][j] && pacific[i][j]) ans.push_back(vector<int>{i, j});    
        // dfs from current cell only if height of next cell is greater
/*