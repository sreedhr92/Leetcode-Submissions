class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int rep;
        sort(nums.begin(),nums.end());
        int prev=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(prev==nums[i])
                rep=nums[i];
            sum+=nums[i];
            prev=nums[i];
        }
        sum-=rep;
        int actual_sum = (nums.size()*(nums.size()+1))/2;            
        return {rep,actual_sum-sum};
    }
};
