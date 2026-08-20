class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        cursum=0
        res=0
        prisum={0:1}
        
        for i in nums:
            cursum+=i
            summ=cursum-k

            res+=prisum.get(summ,0)
            prisum[cursum]=1+prisum.get(cursum,0)

        return res