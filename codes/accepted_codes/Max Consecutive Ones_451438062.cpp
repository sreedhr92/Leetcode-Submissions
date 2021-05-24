class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int prev = nums[0];
        int count =0;
        int max =0;
        if(prev)
        {
            count++;
            max++;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] && prev)
                count++;
            else if(!nums[i])
                count=0;
            else if(nums[i] && !prev)
                count=1;
            prev = nums[i];
            if(count>max)
                max = count;
        }
        return max;
    }
};
