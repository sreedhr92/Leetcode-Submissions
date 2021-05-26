class Solution {
public:
    int minPartitions(string n) {
        int output=0;
        for(char ch:n)
            output= max(output,ch-'0');
        return output;
        
    }
};