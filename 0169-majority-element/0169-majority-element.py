class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n=len(nums)
        ock=n//2
        ans=0

        count=0
        fre={}
        
        for i in nums:
            fre[i]=fre.get(i,0)+1
        print(fre)
        for i in fre:
            if fre[i]>ock:
                ans=i
        return ans
        