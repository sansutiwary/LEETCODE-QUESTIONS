class Solution:
    def findMin(self, nums: list[int]) -> int:
        start=0
        end=len(nums)-1
        while(start<=end):
            mid=(start+end)//2

            if nums[start]<=nums[mid] & nums[mid]<=nums[end]:
                return nums[start]
            elif nums[mid]>=nums[end]:
                start=mid+1
                
            elif nums[mid]<nums[end]:
                end=mid

                
        return -1
        