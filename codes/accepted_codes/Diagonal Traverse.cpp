class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> hash;
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                hash[i+j].push_back(mat[i][j]);
        }
        vector<int> output;
        for(int i=0;i<m+n-1;i++)
        {
            if(i%2)
            {
                for(int j=0;j<hash[i].size();j++)
                    output.push_back(hash[i][j]);
            }
            else
                for(int j=hash[i].size()-1;j>=0;j--)
                    output.push_back(hash[i][j]);
        }
        return output;
    }
};