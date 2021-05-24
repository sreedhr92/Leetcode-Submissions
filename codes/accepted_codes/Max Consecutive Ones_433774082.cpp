class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count;
        int max =0,prev=nums[0];
        if(prev)
        {max=1; count=1;}
        else
        {max=0;count=0;}
        if(nums.size()==1)
           return max;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i])
            {
                if(prev)
                    count++;
                else
                    count=1;
                if(count>max)
                    max=count;
            }
            prev=nums[i];
        }    
        return max;
    }
};
