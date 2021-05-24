class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<0)
            return false;
        for(int i=0;i<30 && pow(3,i)<INT_MAX;i++)
        {
            if(pow(3,i)==n)
                return true;
        }
        return false;
        
    }
};
