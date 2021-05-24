class Solution {
public:
    int titleToNumber(string columnTitle) {
        int output=0;
        for(int i=columnTitle.size()-1,k=0;i>=0;i--,k++)
        {
            output+=pow(26,k)*(columnTitle[i]-64);
        }
        return output;
        
    }
};
