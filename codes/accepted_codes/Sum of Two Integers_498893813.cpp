class Solution {
public:
    int getSum(int a, int b) {
        while(b){
            int carry = (unsigned int)(a & b) << 1;  // unsigned int to handle negitive numbers
            a ^= b;
            b = carry;
        }
        return a;
    }
};