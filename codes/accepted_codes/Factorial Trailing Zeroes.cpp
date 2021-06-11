class Solution {
public:
    int trailingZeroes(int n) {
        int output=0;
        int temp=0;
        while(n)
        {
            temp = n/5;
            output+=temp;
            n = temp;
        }
        return output;
    }
};