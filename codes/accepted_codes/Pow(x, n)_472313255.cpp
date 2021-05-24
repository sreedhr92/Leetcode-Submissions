class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        double ans = myPow(ans,n/2);
        ans*=ans;
        if(n%2!=0)
        {
            if(n>0)
                ans*=x;
            else if(n<0)
                ans/=x;
        }
        return ans;
    }
};
