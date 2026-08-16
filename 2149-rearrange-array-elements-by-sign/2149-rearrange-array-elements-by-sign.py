class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        
        n=len(nums)
        positive_ind=0
        negetive_ind=1

        ans=[0]*n

        for i in range(0,n):
            if nums[i]>0:
                ans[positive_ind]=nums[i]
                positive_ind+=2
            else:
                ans[negetive_ind]=nums[i]
                negetive_ind+=2
        return ans

        