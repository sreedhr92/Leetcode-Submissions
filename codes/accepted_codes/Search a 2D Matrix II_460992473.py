class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        i,j=0,len(matrix[0])-1
        while i<len(matrix) and j>-1:
            curr=matrix[i][j]
            if curr==target:
                return True
            elif target>curr:
                i+=1
            elif target<curr:
                j-=1
        return False
        
