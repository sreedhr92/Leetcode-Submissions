class Solution {
public:
    vector<vector<int>> pos{{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    bool dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int i, int 
        j, int mid) {
        int n = heights.size();
        int m = heights[0].size();
        if(i == n - 1 && j == m - 1)
            return true;
        visited[i][j] = true;
        for(int k = 0; k < 4; k++) {
            int row = i + pos[k][0];
            int coloumn = j + pos[k][1];
            int flag = false;
            if(row >= 0 && row < n && coloumn >= 0 && coloumn < m) {
                int diff = abs(heights[row][coloumn] - heights[i][j]);
                if(!visited[row][coloumn] && diff <= mid) {
                   flag = dfs(heights, visited, row, coloumn, mid);
                }
                if(flag == true)
                    return true;
            }
        }
        return false;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        int low = 0;
        int high = 1e6;
        int ans;
        while(low <= high) {
            int mid = (low + high) / 2;
            vector<vector<bool>> visited(n, vector<bool> (m, false));
            if(dfs(heights, visited, 0, 0, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
