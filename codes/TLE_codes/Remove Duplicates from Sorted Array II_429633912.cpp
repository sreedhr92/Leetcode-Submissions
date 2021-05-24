class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0],i,count=0,k;
        vector<int>::iterator itr = nums.begin();
        for(i=1;i<nums.size();++i)
        {
            if(nums[i]==prev)
                count++;
            else
            {
                if(count>2)
                {
                    nums.erase(itr +(k+1),itr+(i-1));
                }    
                else if(count==2)
                    nums.erase(itr+(k+1)); 
                i = k+1;
                count=0;
                
            }
            if(count == 1)
                k=i;
            prev = nums[i];
        }
        return nums.size();
        
    }
};
