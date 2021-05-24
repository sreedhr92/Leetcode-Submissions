class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        
        const int m = matrix.size();
        if(m==0)
            return {};
        if(m==1)
            return matrix[0];
        vector<int> ans;
        const int n = matrix[0].size();
        if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                ans.push_back(matrix[i][0]);
            }
            return ans;
        }
        unordered_map<int,vector<int>> a;
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                a[i+j].push_back(matrix[i][j]);
            }
        }
        for(int i=0;i<=m+n-2;i++)
        {
            if(i%2==0)
            {
                reverse(a[i].begin(),a[i].end());
                for(int j: a[i])
                    ans.push_back(j);
            }
            else
            {
                for(int j: a[i])
                    ans.push_back(j);
            }
        }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};
