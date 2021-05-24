class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int miss=0;
        int rep=0;
        int n=0;
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
        n=nums.size();
        sum-=rep;
        int actual_sum = (n*(n+1))/2;
        miss = actual_sum-sum;            
        return {rep,miss};
    }
};
