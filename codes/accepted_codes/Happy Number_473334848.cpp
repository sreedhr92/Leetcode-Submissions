class Solution {
public:
    bool isHappy(int n) {
        int count=0;
      while(1)
      {
          if(count==100)
              return false;
          int temp=0;
          while(n!=0)
          {
              temp+=((n%10)*(n%10));
              n/=10;
          }
          if(temp==1)
              return true;
          else
              n=temp;
          count++;
      }
        return false;
    }
};
