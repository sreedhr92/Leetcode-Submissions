class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,sum1=0;
        for(int i:nums)
            sum+=i;
        for(int i=0;i<nums.size();++i)
        {
            if(sum1==sum-sum1-nums[i]) return i;
            sum1+=nums[i];
        }
        return -1;
    }
};