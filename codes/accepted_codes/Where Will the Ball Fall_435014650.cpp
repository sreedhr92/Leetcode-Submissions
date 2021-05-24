class Solution {
public:
    int next_column(vector<vector<int>>& grid,int row,int &m,int &n,int i)
    {
        cout<<"test = "<<i<<" row = "<<row<<endl;
        cout<<"position = "<<grid[row][i]<<endl;
        if(i==0 && (grid[row][i]==-1 || grid[row][i+1]==-1) )
            return -1;
        if(i==n-1 && (grid[row][i]==1 || grid[row][i-1]==1))
            return -1; 
        if(i>0 && grid[row][i]==-1 && grid[row][i-1]==1)
            return -1;
        if(i<n-1 && grid[row][i]== 1 && grid[row][i+1]==-1)
            return -1;
        if(row==m-1)
        {
            if(grid[row][i]==1)
                return i+1;
            else
                return i-1;
        }
        if(grid[row][i]==1)
            return next_column(grid,row+1,m,n,i+1);
        else
            return next_column(grid,row+1,m,n,i-1);           
        
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        if(grid[0].size()==1)
            return {-1};
        vector<int> ans;
        next_column(grid,0,m,n,1);
        for(int i=0;i<grid[0].size();i++)
        {
            ans.push_back(next_column(grid,0,m,n,i));
            //cout<<next_column(grid,0,m,n,i);
        }
        
        return ans;
        
        
    }
};
