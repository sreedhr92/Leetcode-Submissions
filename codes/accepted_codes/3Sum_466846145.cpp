class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        vector<vector<int>> result;
        for(int i=0;i<n;i++)
        {
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
                    s.insert({nums[left],nums[right],nums[i]});
                    left++;
                    right--;
                }
            }
        }
        for(auto it:s)
            result.push_back(it);
        return result;
            
    }
};
