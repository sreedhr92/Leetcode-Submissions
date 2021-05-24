class Solution {
public:
    int reverse(int x) {
        long rev=0;
        //int sign=1;
        while(x!=0)
        {
            rev=rev*10 + x%10;
            x/=10;
        }
       // rev*=sign;
        if (rev > INT_MAX || rev < INT_MIN)
            return 0;
        return rev;
    }
};
