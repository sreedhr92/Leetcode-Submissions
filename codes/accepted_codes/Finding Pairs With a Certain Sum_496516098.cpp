class FindSumPairs {
public:
    unordered_map<int,int> hash;
    vector<int> n1;
    vector<int> n2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        hash.clear();
        n1 = nums1;
        n2 = nums2;
        for(int i:nums2)
                hash[i]++;
    }
    
    void add(int index, int val) {  
            hash[n2[index]]--;
            n2[index]+=val;
            hash[n2[index]]++;
    }
    
    int count(int tot) {
        int count =0;
        for(int i:n1)
        {
            int dif = tot - i;
            if(hash.find(dif)!=hash.end())
                count+=hash[dif];
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 

 */

