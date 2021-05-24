class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        const int n = nums.size();
        if(n==1)
            return;
        k = k%n;
        nums.insert(nums.end(),nums.begin(),nums.end()-k);
        nums.erase(nums.begin(),nums.begin()+(n-k));
        
        
        
    }
};
