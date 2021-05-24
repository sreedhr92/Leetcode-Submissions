class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int m = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                m = max(m,nums[i]^nums[j]);
            }
        }
        return m;
    }
};
