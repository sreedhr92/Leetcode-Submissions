class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
       long long n = arr.size(), l, r, sum;
        
        long long res = 0;
        int mod = pow(10, 9)+7;
        if(arr[0] == arr[n-1] && target == arr[0]*3)
        {
            res = (n*(n-1)*(n-2))/6;
            res %= mod;
            return res;
        }
            
        for(int i=0; i<n; i++) 
        {
            l = i+1;
            r = n-1;
            while(l<r) 
            {
                sum = arr[i]+arr[l]+arr[r];
                if(sum<target)
                    l++;
                else if(sum>target)
                    r--;
                else
                {
                    int lCount = 0, rCount = 0, lval = arr[l], rval = arr[r];
                    if(lval == rval)
                    {
                        int c = r-l+1;
                        res += (c*(c-1))/2;
                        break;
                    }
                    while(l<r && arr[l]==lval)
                    {
                        l++;
                        lCount++;
                    }
                    while(l<=r && arr[r]==rval) 
                    {
                        r--;
                        rCount++;
                    }
                    // System.out.println(i+" "+l+" "+r+" "+lCount+" "+rCount);
                    res += lCount*rCount;
                    res %= mod;
                }
            }
        }
        return res;
    }
};
