class Solution {
public:
    int titleToNumber(string columnTitle) {
        int output=0;
        for(int i=0;i<columnTitle.size();i++)
        {
            output=output*26+(columnTitle[i]-'A')+1;
        }
        return output;
    }
};
