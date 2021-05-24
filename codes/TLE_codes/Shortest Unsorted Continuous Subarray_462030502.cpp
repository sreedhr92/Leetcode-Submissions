class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=nums.size();
        int end=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]<nums[i])
                {
                    end = max(end,j);
                    start = min(start,i);
                }
            }
        }
        return end-start < 0 ? 0 : end-start+1;
        
    }
};
