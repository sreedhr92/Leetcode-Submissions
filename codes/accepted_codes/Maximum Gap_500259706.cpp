class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int output=0;
        for(int i=0;i<nums.size()-1;i++)
            output = max(output,nums[i+1]-nums[i]);
        return output;
        
    }
};