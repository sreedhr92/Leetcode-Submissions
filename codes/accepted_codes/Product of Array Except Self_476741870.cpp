class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[0]=1;
        for(int i=1;i<nums.size();i++)
            ans[i]=nums[i-1]*ans[i-1];
        int p=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            p*=nums[i+1];
            ans[i]=p*ans[i];
        }
        return ans;   
    }
};
