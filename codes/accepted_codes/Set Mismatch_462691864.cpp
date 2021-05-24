class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int rep,sum=accumulate(nums.begin(),nums.end(),0);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[abs(nums[i])-1] < 0) rep = abs(nums[i]);
            else nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
        }      
        sum-=rep;
        return {rep,int((nums.size()*(nums.size()+1))/2)-sum};
    }
};
