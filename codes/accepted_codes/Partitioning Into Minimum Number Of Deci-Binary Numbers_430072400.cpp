class Solution {
public:
    int minPartitions(string n) {
        int max=0,x;
        for(auto ch:n)
        {
            x = ch-'1';
            if (x>max)
                max = x;
        }
        
        return max+1;
    }
};
