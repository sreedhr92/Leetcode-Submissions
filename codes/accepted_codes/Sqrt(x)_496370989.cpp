class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int low=0;
        int high=x;
        int mid;
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(x/mid==mid)
                return mid;
            else if(x/mid<mid)
                high=mid;
            else
                low=mid+1;
        }
        return high-1;
    }
};
