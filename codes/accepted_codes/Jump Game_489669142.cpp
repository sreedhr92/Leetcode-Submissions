class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max=0;
        int reach=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i+nums[i]>max)
                max=i+nums[i];
            if(i==reach)
                reach=max;
        }
        return reach>=nums.size()-1;
    }
};
