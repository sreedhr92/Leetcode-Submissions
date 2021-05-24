class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        //int count = 1;
        //int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<first)
                first = nums[i];
            else if(nums[i]<second && nums[i]>first)
                second = nums[i];
            if(second<nums[i])
                return true;
            /*if(nums[i] > first && nums[i] < second)
                second = nums[i];  */    
        }    
        return false;
    }
};
