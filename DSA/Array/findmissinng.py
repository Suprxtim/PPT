from typing import List

class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(0, n + 1):
            if i in nums:
                continue
            else:
                return i

if __name__ == "__main__":
    solution = Solution()
    print(solution.missingNumber([3, 0, 1]))
    print(solution.missingNumber([0, 1]))
    print(solution.missingNumber([9, 6, 4, 2, 3, 5, 7, 0, 1]))
