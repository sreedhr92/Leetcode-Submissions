class Solution {
public:
    int rob(vector<int>& nums) {
        int curr=0,prev=0,last=0;
        for(const int &i:nums)
        {
            curr = max(prev,last+i);
            last = prev;
            prev = curr;
        }
        return curr;
    }
};
