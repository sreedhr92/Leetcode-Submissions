class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> hash;
        int m =0;
        for(int i:nums)
        {
            hash[i]++;
            if(hash.count(i+1))
                m = max(m,hash[i]+hash[i+1]);
            if(hash.count(i-1))
                m = max(m,hash[i]+hash[i-1]);
        }
        return m;
    }
};
