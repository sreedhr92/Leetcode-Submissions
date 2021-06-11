class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        map<int,int,greater<int>> hash;
        for(int i:nums)
            hash[i]++;
        int ans=0,sum=0;
        for(auto i:hash)
        {
            ans+=sum;
            sum+=i.second;
        }
        return ans;
    }
};