class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(int i:candyType)
            s.insert(i);
        return min(s.size(),candyType.size()/2);
        
        
    }
};
