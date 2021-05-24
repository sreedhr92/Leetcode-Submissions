class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto i:nums)
            hash[i]++;
        int sum =0;
        for(auto i:hash)
        {
            if(i.second==1)
                sum+=i.first;
        }
        return sum;
    }
};
