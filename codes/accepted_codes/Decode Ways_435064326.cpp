class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1,0);
        dp[0] = 1;
        if(s[0]!='0')
            dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            //int one = s[i-1]-'0';
            //int two = (s[i-2]-'0')*10 + (s[i-1]-'0');
            int one = stoi(s.substr(i-1,1));
            int two = stoi(s.substr(i-2,2));
            if(one>=1)
                dp[i]+=dp[i-1];
            if(two>=10 && two <=26)
                dp[i]+=dp[i-2];
        }
        return dp[s.size()];
    }
};
