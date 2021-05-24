class Solution {
public:
    pair<long,int> sum_of_squares(int n)
    {
        long temp=0,r;
        int count=0;
        while(n!=0)
        {
            r = n%10;
            temp += pow(r,2);
            n = n/10;
            count++;
        }
        return {temp,count};
    }
    bool isHappy(int n) {
        if(n==1 || n==7)
            return true;
        pair<long,int> num;
        while(1)
        {
            num = sum_of_squares(n);
            if(num.first==1 ||num.first==7)
                return true;
            else if(num.first!=1 && num.second==1)
                return false;
            n = num.first;
            
        }
        return false;
    }
};
