class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int i:candyType)
            s.insert(i);
        int size=s.size();
        int n = candyType.size()/2;
        if(size>=n)
            return n;
        else
            return size;
        
        
    }
};
