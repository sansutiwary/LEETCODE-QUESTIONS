class Solution:
    def subarrayGCD(self, nums: List[int], k: int) -> int:
        count=0
        for i in range (len(nums)):
            if nums[i]%k==0:
                for j in range (i+1,len(nums)+1):
                    if math.gcd(*nums[i:j]) == k:
                        count+=1
        return count

            