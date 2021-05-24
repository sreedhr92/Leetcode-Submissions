class Solution {
public:
    int maxCoins(vector<int>& nums) {
        const int n = nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));
        for(int win=1;win<=n;win++)
        {
            for(int left=1;left<=n-win+1;left++)
            {
                int right = left+win-1;
                for(int i=left;i<=right;i++)
                {
                    dp[left][right] = max(dp[left][right] , (nums[left-1] * nums[i] * 
                        nums[right+1])
                                          +dp[left][i-1] + dp[i+1][right]);
                }
            }
            //cout<<dp[1][n];
        }
        return dp[1][n];
    }
};
