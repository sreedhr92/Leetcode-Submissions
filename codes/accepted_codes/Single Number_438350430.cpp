class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(const int &i : nums)
            a^=i;
        return a;
            
        
    }
};
