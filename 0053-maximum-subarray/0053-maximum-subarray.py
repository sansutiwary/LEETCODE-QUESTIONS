class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_neg=float('-inf')

        current=0
        for i in nums:
            current+=i
            max_neg=max(current, max_neg)

            if current<0:
                current=0
        return max_neg