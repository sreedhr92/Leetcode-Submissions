class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        long long pow;
        for(long i=0;i<=x/2;i++)
        {
            pow=i*i;
            if(pow>x)
                return i-1;
        }
        return x/2;
    }
};
