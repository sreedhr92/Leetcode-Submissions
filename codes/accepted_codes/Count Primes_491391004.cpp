class Solution {
public:
    int countPrimes(int n) {
        if(n<=1)
            return 0;
        vector<bool> isprime(n,true);
        int count=0;
        for(int i=2;i*i<n;i++)
        {
            if(isprime[i])
            {
                for(int j=i*i;j<n;j+=i)
                    isprime[j]=false;
            }
        }
        for(int i=2;i<n;i++)
        {
            if(isprime[i])
                count++;
        }
       return count;
    }
};
