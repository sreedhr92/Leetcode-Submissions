class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n<=1)
            return n;
        vector<int> nums(n+1);
        nums[0] = 0;
        nums[1] = 1;
        int max = -1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                nums[i] = nums[i/2];
                if(nums[i]>max)
                    max = nums[i];
            }    
            else
            {
                nums[i] = nums[i/2] + nums[(i/2) +1];
                if(nums[i]>max)
                    max = nums[i];
            }
                
        }
        return max;
    }
};
