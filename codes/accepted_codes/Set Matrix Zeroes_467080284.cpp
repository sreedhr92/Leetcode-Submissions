class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows;
        set<int> cols;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(!matrix[i][j])
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int r:rows)
        {
            for(int i=0;i<matrix[0].size();i++)
                matrix[r][i]=0;
        }
        for(int c:cols)
        {
            for(int i=0;i<matrix.size();i++)
                matrix[i][c]=0;
        }
    }
};
