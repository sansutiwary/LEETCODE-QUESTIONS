class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:

        ans=[]
        intervals.sort(key=lambda x:(x[0],x[1]))

        curr=intervals[0]
        

        for i in range(1,len(intervals)):
            nextt=intervals[i]
            if curr[1]>=nextt[0]:
                curr=[curr[0],max(curr[1],nextt[1])]
                
            else:
                ans.append(curr)
                curr=nextt
        ans.append(curr)

        return ans
        