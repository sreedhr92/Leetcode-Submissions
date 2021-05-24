class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int l=1;
        int flag=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1] && flag!=1)
            {
                l++;
                flag=1;
            }
            if(nums[i] < nums[i-1] && flag!=2)
            {
                l++;
                flag=2;
            }
        }
        return l;
    }
};
