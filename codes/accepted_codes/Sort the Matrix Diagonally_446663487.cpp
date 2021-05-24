class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size(),n=mat[0].size();
        unordered_map<int,deque<int>> diag;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                diag[i-j].push_back(mat[i][j]);
            }
        }
        for(auto it:diag)
            sort(diag[it.first].begin(),diag[it.first].end());
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j] = diag[i-j].front();
                diag[i-j].pop_front();
            }
        }
        return mat;
        
    }
};
