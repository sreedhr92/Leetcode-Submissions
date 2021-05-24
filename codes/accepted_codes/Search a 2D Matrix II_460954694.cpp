class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=matrix[0].size()-1;
        while(i<matrix.size() && j<matrix[0].size())
        {
            int curr = matrix[i][j];
            if(curr==target)
                return true;
            if(curr>target)
                j--;
            else if(curr<target)
                i++;
        }
        return false;        
    }
};
