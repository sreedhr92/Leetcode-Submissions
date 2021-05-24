class Solution {
public:
    bool reorderedPowerOf2(int N) {
        vector<int> a(10,0);
        while(N)
        {
            a[N%10]++;
            N/=10;
        }
        for(int i=0;i<31;i++)
        {
            int n = 1<<i;
            vector<int> b(10,0);
            while(n)
            {
                b[n%10]++;
                n/=10;
            }
            int flag=1;
            for(int j=0;j<10;j++)
            {
                if(a[j]!=b[j])
                    flag=0;
            }
            if(flag)
                return true;
        }
        return false;
    }
};
