class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        vector<int> ans(n, 1);
        int left = 1, right = 1;
        for (int i = 0; i < n; i++)
        {
            ans[i] *= left;
            ans[n-i-1] *= right;
            left *= nums[i];
            right *= nums[n-i-1];
        }
        
        return ans;
    }
};
