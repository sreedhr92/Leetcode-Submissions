class Solution {
public:
    int brokenCalc(int X, int Y) {
        int ret = 0;
    while (X < Y) {
      ret = ret + 1 + Y%2;
      Y = (Y+1)/2;
    }
    return ret + X - Y;
        
    }
};
