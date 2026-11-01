class Solution:
    def findPeakGrid(self, mat: list[list[int]]) -> list[int]:
        row=len(mat)
        col=len(mat[0])

        low= 0
        high = col-1

        while low<=high:

            mid=(low+high)//2

            maxrow=0

            for i in range(row):

                if mat[i][mid]>mat[maxrow][mid]:
                    maxrow=i

            current = mat[maxrow][mid]

            leftrow = mat[maxrow][mid-1] if mid>0 else float("-inf")
            rightrow = mat[maxrow][mid+1] if mid<col-1 else float("-inf")

            if current > leftrow and current>rightrow :
                return [maxrow,mid]
            
            elif leftrow>current:
                high=mid-1
            
            elif rightrow>current:
                low=mid+1