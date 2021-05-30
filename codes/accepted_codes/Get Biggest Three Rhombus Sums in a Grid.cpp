class Solution {
public:
    int get_sum(vector<vector<int>> &grid,int &i,int &j,int &size)
    {
        if(size==0)
            return grid[i][j];
        int sum=0,t1 = i,t2 = j;
        for(int index=0;index<size;t1++,t2--,index++)
            sum+=grid[t1][t2];   
        for(int index=0;index<size;t1++,t2++,index++)
            sum+=grid[t1][t2];
        for(int index=0;index<size;t1--,t2++,index++)
            sum+=grid[t1][t2];
        for(int index=0;index<size;t1--,t2--,index++)
            sum+=grid[t1][t2];
        return sum;
    }
    bool inrange(int &m,int &n,int p1,int p2,int p3)
    {
        if(p1>=m or p2<0 or p3>=n)
            return false;
        return true;
    }
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        vector<int> sums;
        unordered_set<int> heap;
        int row=grid.size(),col=grid[0].size();
        int max_size = min(row,col)/2;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                for(int a=0;a<=max_size;a++)
                {
                    if(inrange(row,col,i+(a*2),j-a,a+j))
                        heap.insert(get_sum(grid,i,j,a));
                }
            }
        }
        for(int i:heap)
            sums.push_back(i);
        sort(sums.begin(),sums.end(),greater<int>());
        if(sums.size()<3)
            return sums;
        return {sums[0],sums[1],sums[2]};
    }
};