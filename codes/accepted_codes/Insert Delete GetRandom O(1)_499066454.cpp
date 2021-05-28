class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,int> hash;
    vector<int> nums;
    RandomizedSet() {
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(hash.find(val)!=hash.end())return false;
        nums.emplace_back(val);
        hash[val]=nums.size()-1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(hash.find(val)==hash.end())return false;
        int last = nums.back();
        hash[last] = hash[val];
        nums[hash[val]] = last;
        hash.erase(val);
        nums.pop_back();
        return true;
        
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */