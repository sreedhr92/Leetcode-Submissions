class FindSumPairs {
public:
    unordered_map<int,int> hash;
    vector<int> n1;
    vector<int> n2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        n1 = nums1;
        n2 = nums2;
        for(int i:nums1)
        {
            for(int j:nums2)
                hash[i+j]++;
        }
        
    }
    
    void add(int index, int val) {  
        hash.clear();
        n2[index]+=val;
        for(int i:n1)
        {
            for(int j:n2)
                hash[i+j]++;
        }        
    }
    
    int count(int tot) {
        return hash[tot];
        
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
