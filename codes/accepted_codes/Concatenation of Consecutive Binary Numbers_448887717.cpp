class Solution {
public:
    int concatenatedBinary(int n) {
        long long int val =0;
        for(int i=1;i<=n;i++)
            val = ((val << int((1+ log2(i))))%1000000007 + i)%1000000007;
        return val;
    }
};
