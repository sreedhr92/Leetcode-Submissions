class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0] ;
        int max = -1;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<buy)
                buy = prices[i];
            if(prices[i] - buy > max)
                max =  prices[i]  - buy;
        }
        return max == -1 ? 0 : max;
    }
};
