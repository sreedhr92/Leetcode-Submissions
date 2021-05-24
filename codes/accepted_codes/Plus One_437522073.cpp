class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            int val = digits[i]+1;
            if(val <= 9)
            {
                digits[i] = val;
                break;
            }    
            else
            {
                digits[i] = 0;
                if(i==0)
                {
                    digits.insert(digits.begin(),1);
                    break;
                }
            }
        }
            
        return digits;
        
    }
};
