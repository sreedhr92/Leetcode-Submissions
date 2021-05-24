class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int start = nums[0];
        //int len = 1;
        int count=1,i;
        //vector<int>::iterator itr = nums.begin();
        for(i=1;i<nums.size();++i)
        {
            if (start==nums[i])
            {
                count++;
                if (count>2)
                {
                    nums.erase(nums.begin()+i);
                    i--;
                } 
            }
            else
            {
                count=1;
                start = nums[i];
            }
        }
        return nums.size();
        
    }
};
