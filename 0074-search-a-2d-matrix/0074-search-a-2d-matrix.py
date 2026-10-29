class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        row=len(matrix)
        column=len(matrix[0])

        low=0
        high=row-1
        row_index=-1

        while(low<=high):
            mid=(low+high)//2

            if matrix[mid][0]<=target<=matrix[mid][column-1]:
                row_index=mid
                break
            elif matrix[mid][-1]<target:
                low=mid+1
            elif matrix[mid][0]>target:
                high=mid-1

        if row_index==-1:
            return False
        
        l=0
        h=column-1
        while(l<=h):
            mid=(l+h)//2
            if matrix[row_index][mid]==target:
                return True
            elif matrix[row_index][mid]>target:
                h=mid-1
            else:
                l=mid+1
        return False
        

         