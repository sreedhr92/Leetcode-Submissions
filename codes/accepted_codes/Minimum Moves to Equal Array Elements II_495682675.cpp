class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int output=0;
        int median = nums[nums.size()/2];
        for(int i:nums)
            output+=abs(median-i);
        return output;
            
       
    }
};
