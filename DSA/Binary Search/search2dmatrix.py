class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        if not matrix or not matrix[0]:
            return False
        m=len(matrix)   #row
        n=len(matrix[0]) #column
        low=0
        high=(m*n)-1

        while low<= high:
            mid=(low+high)//2

            row=mid//n
            column=mid% n  

            mid_element=matrix[row][column]

            if mid_element == target:
                return True
            elif mid_element< target:
                low=mid+1
            else:
                high=mid-1
        return False