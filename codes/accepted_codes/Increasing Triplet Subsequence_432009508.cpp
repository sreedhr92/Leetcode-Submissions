class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n1 = INT_MAX, n2 = INT_MAX;
        for(auto num : nums) {
            if(num <= n1) {
                n1 = num;
            } else if (num <= n2) {
                n2 = num;
            } else return true;
        }
        return false;
    }
};
