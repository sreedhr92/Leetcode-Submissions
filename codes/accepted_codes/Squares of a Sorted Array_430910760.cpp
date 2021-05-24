class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(auto &a:nums)
            a*=a;
        sort(nums.begin(),nums.end());
        return nums;
        
            
    }
};
