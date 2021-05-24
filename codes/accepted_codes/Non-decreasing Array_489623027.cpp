class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int changes=0;
        int index;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                index=i;
                changes++;
            }
        }
        if(changes==1)
        {
            if(index-1>=0 && index+2 <nums.size() && nums[index-1]>nums[index+1] && 
                nums[index] > nums[index+2] )
                return false;
                
        }
        return changes <= 1;
    }
};

//[3,4,2,3]
