class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = (nums.size()*(nums.size()+1))/2;
        for(int i:nums)
            ans-=i;
        return ans;
        
    }
};
