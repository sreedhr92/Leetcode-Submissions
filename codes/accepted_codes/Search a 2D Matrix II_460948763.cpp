class Solution {
public:
    bool binary_search(vector<int> &matrix,int &target)
    {
        int low = 0;
        int high =matrix.size()-1;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(matrix[mid]==target)
                return true;
            else if(target<matrix[mid])
                high = mid-1;
            else if(target>matrix[mid])
                low = mid+1;            
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(binary_search(matrix[i],target))
                return true;
        }
        return false;
        
        
        
    }
};
