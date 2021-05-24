class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=0;
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
                if(i==0)
                    flag=1;
                digits[i] = 0;
            }
        }
        if(flag==1)
            digits.insert(digits.begin(),1);
        return digits;
        
    }
};
