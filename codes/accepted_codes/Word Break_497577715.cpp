class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> set;
        for(string a:wordDict)
            set.insert(a);
        vector<int> dp(s.size()+1,0);
        dp[0]=1;
        int n=s.size();
        string temp;
        for(int i=1;i<=s.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                temp = s.substr(j,i-j);
                if(dp[j] and set.find(temp)!=set.end()){
                    
                    dp[i]=1;
                    break;
                }
            }
        }
        return  dp[n];
    }
};
