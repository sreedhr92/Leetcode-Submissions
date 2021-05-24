class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        long int dist =INT_MAX,flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                 if(dist<k)
                     return false;
                dist = 0;
            }
            else
                dist++;
        }
        return true;
        
        
    }
};
