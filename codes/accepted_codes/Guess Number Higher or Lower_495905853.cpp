/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return       -1 if num is lower than the guess number
 *                1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int value(int l,int r)
    {
        int m = l + (r-l)/2;
        cout<<m<<endl;
        if(guess(m)==0)
            return m;
        else if(guess(m)==1)
            return value(m+1,r);
        else
            return value(l,m-1);
        
    }
    int guessNumber(int n) {
        return value(1,n);        
    }
};
