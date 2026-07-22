class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mini=prices[0]
        maxi=0
        if len(prices)==1:
            return 0

        for i in range(1,len(prices)):
            mini=min(mini,prices[i])
            if prices[i]>mini:
                maxi=max(prices[i]-mini,maxi)

        return maxi