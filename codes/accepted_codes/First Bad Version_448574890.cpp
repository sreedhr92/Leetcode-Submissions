// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int middle =1;
        while(left<=right)
        {
            middle = left + (right-left)/2;
            if(!isBadVersion(middle))
                left = middle+1;
            else
                right = middle-1;                
        }
        if(!isBadVersion(middle))
            middle++;            
        return middle;
    }
};
