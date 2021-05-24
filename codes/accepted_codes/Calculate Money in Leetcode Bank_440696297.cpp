class Solution {
public:
    int totalMoney(int n) {
        int week = n/7;
        int rem = n%7;
        int w=0;
        int i;
        for(i=0;i<week;i++)
        {
            w = w +(i*7)+28;
        }
        rem = (i*rem) + (rem*(rem+1))/2;
        return w+rem;
        
        
    }
};
