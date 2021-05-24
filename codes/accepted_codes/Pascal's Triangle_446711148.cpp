class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0)
            return {};
        vector<vector<int>> a;
        for(int i=0;i<=numRows;i++)
        {
            vector<int> n(i,1);
            if(i>2)
            {
                for(int j=1;j<i-1;j++)
                    n[j] = a[i-1][j-1] + a[i-1][j];
            }
            a.push_back(n);
        }
        a.erase(a.begin());
        return a;
    }
};
