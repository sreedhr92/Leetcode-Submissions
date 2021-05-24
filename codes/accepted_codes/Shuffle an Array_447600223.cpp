class Solution {
public:
    vector<int> orig,shuf;
    Solution(vector<int>& nums) {
        orig=nums;
        shuf=nums;        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return orig;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        random_shuffle(shuf.begin(),shuf.end());
        return shuf;   
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
