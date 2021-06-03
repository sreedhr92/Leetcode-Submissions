class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int carry=0;
        for(int i=n-1;i>=0;--i)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                carry=1;
            }
            else
            {
                digits[i]++;
                carry=0;
                break;
            }
        }
        if(carry)
            digits.insert(digits.begin(),1);
        return digits;
    }
};