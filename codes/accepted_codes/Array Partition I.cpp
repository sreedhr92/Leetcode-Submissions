class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int output=0;
        for(int i=0;i<nums.size()-1;i+=2)
            output+=min(nums[i],nums[i+1]);
        return output;

    }
};