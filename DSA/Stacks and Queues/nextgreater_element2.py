class Solution:
    def nextGreaterElements(self, nums):
        n = len(nums)
        res = [-1] * n
        stack = []  # stores indices

        # We iterate twice to simulate the circular behavior
        for i in range(2 * n):
            cur = nums[i % n]

            # While the stack isn't empty and the current number 
            # is greater than the number at the index on top of the stack
            while stack and nums[stack[-1]] < cur:
                idx = stack.pop()
                res[idx] = cur

            # We only push indices to the stack during the first pass
            if i < n:
                stack.append(i)

        return res

# --- VS CODE EXECUTION BLOCK ---
if __name__ == "__main__":
    sol = Solution()
    
    # Test Case 1
    test_nums = [1, 2, 1]
    result = sol.nextGreaterElements(test_nums)
    
    print(f"Input:  {test_nums}")
    print(f"Output: {result}")
    
    # Test Case 2
    test_nums_2 = [3, 8, 4, 1, 2]
    print(f"\nInput:  {test_nums_2}")
    print(f"Output: {sol.nextGreaterElements(test_nums_2)}")
    
    sol = Solution()
    print(sol.nextGreaterElements([1, 2, 1]))