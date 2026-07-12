class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:

        num_set=set(nums)
        length=0
        max_len=0
        for i in num_set:
            if i-1 not in num_set:
                current =i 
                length=1
                while(current+1 in num_set):
                    current+=1
                    length+=1
                max_len=max(max_len,length)
        return max_len