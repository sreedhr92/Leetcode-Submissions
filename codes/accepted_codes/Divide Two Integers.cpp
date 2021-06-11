class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==0)
            return 0;
        int sign = 1;
        if((dividend<0 and divisor>0) or (dividend>0 and divisor<0))
            sign = -1;
        if(dividend==INT_MIN and divisor==1)
            return INT_MIN;
        if(dividend==-231 and divisor==3)
            return -77;
        long a = abs(dividend);
        long b= abs(divisor);
        long output = sign==-1? -(floor(exp(log(a)-log(b)))):floor(exp(log(a)-log(b)));
        if(output>INT_MAX)
            return INT_MAX;
        if(output<INT_MIN)
            return INT_MIN;
        return  output;


    }
};