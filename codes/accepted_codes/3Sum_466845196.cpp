class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0;i<n;i++)
        {
            if(i-1>=0 && nums[i]==nums[i-1])
                continue;
            int left=i+1;
            int right=n-1;
            while(left<right)
            {
                if(nums[left]+nums[right]+nums[i]<0)
                    left++;
                else if(nums[left]+nums[right]+nums[i]>0)
                    right--;
                else
                {
                    result.push_back({nums[left],nums[right],nums[i]});
                    left++;
                    while(left<n && nums[left]==nums[left-1])
                        left++;
                    right--;
                    while(right>-1 && nums[right]==nums[right+1])
                        right--;
                }
            }
        }
        return result;
            
    }
};
