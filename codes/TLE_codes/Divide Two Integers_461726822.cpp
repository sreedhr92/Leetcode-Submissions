class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==0)
            return 0;
         int ans = 0;

        if (divisor == INT_MIN)
            if (dividend == divisor) return 1;
            else return 0;
        
        if (dividend == INT_MIN)
            if (divisor == 1) return INT_MIN;
            else if (divisor == -1) return INT_MAX;
            else dividend += abs(divisor), ans++;

        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        
        dividend = abs(dividend), divisor = abs(divisor);
        if(divisor==1)
            return dividend*sign;
        while(dividend>=divisor)
        {
            ans++;
            dividend-=divisor;
        }
        return ans*sign;
        
    
    }
};
