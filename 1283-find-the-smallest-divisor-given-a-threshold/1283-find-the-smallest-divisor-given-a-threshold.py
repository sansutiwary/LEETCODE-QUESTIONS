import math
class Solution:
    def smallestDivisor(self, nums: list[int], threshold: int) -> int:
        start=1
        end=max(nums)
        ans=0
        sumresult=0
        n=len(nums)

        while(start<end):

            mid=(start+end)//2
            sumresult=0

            for i in nums:
                sumresult+=math.ceil(i/mid)
            
            if sumresult <=threshold:
                
                sumresult=0
                end=mid
            else:
                start=mid+1

        return start