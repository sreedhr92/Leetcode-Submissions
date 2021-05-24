class Solution {
public:
    static bool compare(vector<int>a,vector<int>b)
    {
        if(a[0]==b[0])return a[1]<b[1];
        return a[0]<b[0];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int res=1;
        int n=envelopes.size();
        sort(envelopes.begin(),envelopes.end(),compare);
        vector<int> dp(n,1);
        for(int i=0;i<n;++i)
        {
            for(int j=i-1;j>=0;--j)
            {
                if(envelopes[i][0]>envelopes[j][0] && envelopes[i][1]
                    >envelopes[j][1])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                    res=max(dp[i],res);
                }
            }
        }
        return res;
    }

