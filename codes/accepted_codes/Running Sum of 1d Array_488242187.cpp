class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> prefix_sum;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            prefix_sum.push_back(sum);
        }
        return prefix_sum;
    }
};
