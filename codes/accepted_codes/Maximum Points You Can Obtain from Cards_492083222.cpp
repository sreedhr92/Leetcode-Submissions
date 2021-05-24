class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> prefix,suffix;
        int sum=0,output=0;
        prefix.push_back(sum);
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
            prefix.push_back(sum);
        }
        sum=0;
        suffix.push_back(sum);
        for(int i=cardPoints.size()-1,j=0;j<k;i--,j++)
        {
            sum+=cardPoints[i];
            suffix.push_back(sum);
        }
        for(int i=0;i<=k;i++)
            output = max(output,prefix[i]+suffix[k-i]);
        prefix.clear();
        suffix.clear();
        return output;
    }
};
