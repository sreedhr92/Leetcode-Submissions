class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> hash;
        int m =0;
        for(int i:nums)
        {
            hash[i]++;
            if(hash.find(i+1)!=hash.end())
                m = max(m,hash[i]+hash[i+1]);
            if(hash.find(i-1)!=hash.end())
                m = max(m,hash[i]+hash[i-1]);
        }
        return m;
    }
};
