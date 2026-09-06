class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        n=len(nums)
        pre=1
        suff=1
        maxpr=float("-inf")

        for i in range(n):

            if pre==0:
                pre=1
            elif suff==0:
                suff=1
            
            pre*=nums[i]
            suff*=nums[n-1-i]

            maxpr=max(pre,suff,maxpr)
        return maxpr
        