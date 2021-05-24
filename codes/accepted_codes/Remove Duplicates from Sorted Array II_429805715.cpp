class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int start = nums[0];
        int len = 1;
        int flag=0,i;
        //vector<int>::iterator itr = nums.begin();
        for(i=1;i<nums.size();++i)
        {
            if (start==nums[i])
            {
                //count++;
                if (flag)
                {
                    nums.erase(nums.begin()+i);
                    i--;
                }
                else
                {
                    flag =1;                 
                    len++;
                }    
            }
            else
            {
                flag = 0;
                len++;
                start = nums[i];
            }
        }
        return len;
        
    }
};
