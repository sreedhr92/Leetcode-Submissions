class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size(),n=mat[0].size();
        unordered_map<int,vector<int>> diag;
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
                mat[i][j] = diag[i-j][0];
                diag[i-j].erase(diag[i-j].begin());
            }
        }
        return mat;
        
    }
};
