class Solution:
    def cherryPickup(self, grid: List[List[int]]) -> int:
        def dfs(row,col1,col2):
            if(row,col1,col2) in dp:
                return dp[(row,col1,col2)]
            if row == m:
                return 0
            
            next_result = 0
            
            cherries = grid[row][col1] +(0 if col1==col2 else grid[row][col2])
            
            for i in range(-1,2):
                for j in range(-1,2):
                    new_col1 = col1 + i
                    new_col2 = col2 + j
                    if 0<= new_col1 <n and 0 <=new_col2 <n:
                        next_result = max(next_result,dfs(row+1,new_col1,new_col2))
            
            ans = next_result + cherries
            dp[(row,col1,col2)] = ans
            return ans
        
        m = len(grid)
        n = len(grid[0])
        dp={}
        return dfs(0,0,n-1)
