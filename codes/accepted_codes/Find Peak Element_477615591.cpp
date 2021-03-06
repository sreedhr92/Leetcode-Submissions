class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                if(INT_MIN < nums[i] && nums[i] > nums[i+1])
                    return 0;
            }
            else if(i==nums.size()-1)
            {
                if(nums[i-1]<nums[i] && nums[i]>INT_MIN)
                    return nums.size()-1;
            }
            else
            {
                if(nums[i-1]<nums[i] && nums[i]>nums[i+1])
                    return i;
            }
        }
        return -1;
    }
};
