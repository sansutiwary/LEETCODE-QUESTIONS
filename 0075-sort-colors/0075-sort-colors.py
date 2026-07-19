class Solution:
    def sortColors(self, nums: List[int]) -> None:
        end=len(nums)-1
        s=0
        mid=0
        while(mid<=end):
            if nums[mid]==0:
                nums[mid],nums[s]=nums[s],nums[mid]
                s+=1
                mid+=1

            elif nums[mid]==2:
                nums[mid],nums[end]=nums[end],nums[mid]
                end-=1
            elif nums[mid]==1:
                mid+=1