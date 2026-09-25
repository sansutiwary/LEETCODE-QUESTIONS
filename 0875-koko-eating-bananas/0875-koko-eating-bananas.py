class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        start=1
        end=max(piles)

        while start<end:
            mid=(start+end)//2

            total_hours=0

            for pile in piles:
                total_hours+=(pile+mid-1)//mid

            if total_hours<=h:
                end=mid
            else:
                start=mid+1
        return start
