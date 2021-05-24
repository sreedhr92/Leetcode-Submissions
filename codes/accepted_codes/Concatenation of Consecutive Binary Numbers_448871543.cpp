class Solution {
public:
    int concatenatedBinary(int n) {
        if (n == 1) // base case
            return 1;
        long res = concatenatedBinary(n-1); // find result for n-1
        // add res to n
        // find no of bits in n
        int no_of_bits = 0;
        int num = n;
        while (num) {
            num >>= 1;
            no_of_bits++;
        }
        // left shift res by no_of_bits and append n to res (concatenating n with 
            result of n-1)
        res <<= no_of_bits;
        res += n;
        res %= (int)1e9+7;
        return res;
    }
};
