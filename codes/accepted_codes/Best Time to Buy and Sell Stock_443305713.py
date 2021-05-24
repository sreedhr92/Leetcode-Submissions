class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = prices[0]
        maxi = 0
        for i in range(1,len(prices)):
            if prices[i] < buy:
                buy=prices[i]
            else:
                maxi = max(maxi,prices[i]-buy)
        return maxi
            
        
