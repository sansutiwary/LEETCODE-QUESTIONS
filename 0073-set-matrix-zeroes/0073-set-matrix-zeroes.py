class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        first_row=False
        first_col=False
        row=len(matrix)
        col=len(matrix[0])
        for i in range(row):
            if matrix[i][0]==0:
                first_col=True
        for j in range(col):
            if matrix[0][j]==0:
                first_row=True
        
        for i in range(0,row):
            for j in range(0, col):
                if matrix[i][j]==0:
                    matrix[i][0]=0
                    matrix[0][j]=0
        for i in range(1,row):
            if matrix[i][0]==0:
                for j in range(1, col):
                    matrix[i][j]=0
        
        for j in range(1,col):
            if matrix[0][j]==0:
                for i in range(1,row):
                    matrix[i][j]=0
        
        if first_row:
            for i in range(0,col):
                matrix[0][i]=0
        if first_col:
            for j in range(0,row):
                matrix[j][0]=0
