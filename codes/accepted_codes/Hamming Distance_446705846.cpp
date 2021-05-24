class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned int mask = 1;
        vector<int> a(32,0),b(32,0);
        int i=0;
        while(x!=0)
        {
            a[i] = mask&x;
            x>>=1;
            i++;
        }
        i=0;
        while(y!=0)
        {
            b[i] = mask&y;
            y>>=1;
            i++;
        }
        int count = 0;
        for(i=0;i<32;i++)
        {
            if(a[i]!=b[i])
                count++;
        }
        return count;
        
    }
};
