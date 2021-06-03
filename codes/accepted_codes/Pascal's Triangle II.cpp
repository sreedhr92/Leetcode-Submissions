class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)
            return {1};
        vector<vector<int>> a={{1}};
        a.push_back({1,1,});
        for(int i=3;i<=rowIndex+1;i++)
        {
            vector<int> n(i,1);
            for(int j=1;j<i-1;j++)
                n[j] = a.back()[j-1] + a.back()[j];
            a.push_back(n);
        }
        return a[rowIndex];
        
    }
};