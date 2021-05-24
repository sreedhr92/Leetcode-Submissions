class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int n = a.size();
        int i=0,c=0;
        while(i < n && c < x)
        {
            c += a[i++];
        }
        
        if(i == n)
        {
            return c == x ? n : -1;
        }
        
        int l = i-1;
        int r = n-1;
        int res = (c == x ? i : INT_MAX);
        while(l >= 0 && r > l)
        {
            if(c >= x)
                c -= a[l--];
            if(c < x)
                c += a[r--];
            if(c == x)
            {
                res = min(res, l+n-r);
            }
        }
        
        return res == INT_MAX ? -1 : res;
    }
};
