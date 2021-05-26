class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> hash;
        for(int i:arr)
        {
            if(hash.find(i*2)!=hash.end())
                return true;
            else if(i%2==0 and hash.find(i/2)!=hash.end())
                return true;
            else
                hash[i]++;
        }
        return false;
    }
};