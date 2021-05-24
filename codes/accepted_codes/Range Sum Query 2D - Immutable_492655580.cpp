class NumMatrix {
public:
    vector<vector<int>> prefix;
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            vector<int> temp;
            int sum=0;
            for(int j=0;j<matrix[0].size();j++)
            {
                sum+=matrix[i][j];
                temp.push_back(sum);
            }
            prefix.push_back(temp);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++)
        {
            sum+=prefix[i][col2];
            if(col1-1!=-1)
                sum-=prefix[i][col1-1];
        }
        return sum;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
