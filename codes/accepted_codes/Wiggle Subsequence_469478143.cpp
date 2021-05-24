class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int l=1;
        int prev=nums[0];
        int flag=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>prev && !flag)
            {
                l++;
                flag=1;
            }
            else if(nums[i] < prev && flag)
            {
                l++;
                flag=0;
            }
            prev=nums[i];
        }
        int r=1;
        prev=nums[0];
        flag=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] < prev && flag)
            {
                r++;
                flag=0;
            }
            else if(nums[i]>prev && !flag)
            {
                r++;
                flag=1;
            }
            prev=nums[i];
        }
        return max(l,r);
    }
};
