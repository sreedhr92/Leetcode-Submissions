class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int output=0;
        int left=0;
        int right=nums.size()-1;
        while(left<right)
        {
            int sum = nums[left]+nums[right];
            output = max(sum,output);
            left++;
            right--;
        }
        return output;
    }
};