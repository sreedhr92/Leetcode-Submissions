class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int output=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i])
            {
                int len=0;
                while(i<nums.size() && nums[i])
                {
                    len++;
                    i++;
                }
                output = max(len,output);
            }
        }
        return output;
    }
};