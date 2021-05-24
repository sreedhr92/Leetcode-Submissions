class Solution {
public:
    int jump(vector<int>& nums) {
        int reach=0;
        int count=0;
        int max=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(i+nums[i]>max)
            {
                max=i+nums[i];
            }
            if(i==reach)
            {
                reach=max;
                count++;
            }
        }
        return count;
    }
};
