class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1)
            return 0;
        int buy=prices[0],sell=0,profit=0;
        for(int i=1;i<prices.size();++i)
        {
            if(prices[i]<prices[i-1])
            {buy = prices[i];continue;}
            if(prices[i] > buy  && i+1<prices.size() && prices[i+1]<prices[i])
            {
                sell = prices[i];
                profit+=(sell-buy);
            }
        }
        profit = max(profit +prices[prices.size()-1]-buy,profit);
        return profit;
    }
};
