class Solution:
    def nextPermutation(self, nums: List[int]) -> None:

        k=len(nums)-2
        n=len(nums)-1
        pov=-1
        for i in range(k,-1,-1):
            if nums[i]<nums[i+1]:
                pov=i
                break
        if pov==-1:
            s=0
            while(s<=n):
                nums[s],nums[n]=nums[n],nums[s]
                s+=1
                n-=1
        else:
            for i in range(len(nums)-1,-1,-1):
                if nums[pov]<nums[i]:
                    nums[pov],nums[i]=nums[i],nums[pov]
                    break
            s=pov+1
            while(s<=n):
                nums[s],nums[n]=nums[n],nums[s]
                s+=1
                n-=1
        