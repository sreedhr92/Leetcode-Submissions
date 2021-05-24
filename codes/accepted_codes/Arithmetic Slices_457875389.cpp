class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n = A.size();   
    if (n < 3)
      return 0;
    
    int ans = 0;
    int crr_len = 2;
    int pre_diff = A[1] - A[0];
    for (int i = 2; i < n; ++i) {
      int crr_diff = A[i] - A[i - 1];
      if (crr_diff == pre_diff) {
        crr_len++;
      } else {
        if (crr_len > 2)
          ans += (crr_len - 1) * (crr_len - 2) / 2;
        
        crr_len = 2;
      }
      
      pre_diff = crr_diff;
    }
    
    if (crr_len > 2)
      ans += (crr_len - 1) * (crr_len - 2) / 2;
    
    return ans;
    }
};
