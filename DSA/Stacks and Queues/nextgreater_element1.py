class Solution:
    def nextGreaterElement(self, nums1, nums2):
        # Dictionary to store the Next Greater Element for each number in nums2
        # Key: number, Value: its next greater element
        next_greater = {}
        stack = []

        for num in nums2:
            # If current num is greater than the top of the stack, 
            # then num is the "next greater" for the stack top
            while stack and stack[-1] < num:
                smaller_num = stack.pop()
                next_greater[smaller_num] = num
            
            stack.append(num)

        # For any numbers left in stack, they have no next greater element
        # (Though dict.get() handles this by returning a default value)

        # Build the result for nums1 using the map we just created
        return [next_greater.get(n, -1) for n in nums1]

# --- VS CODE EXECUTION BLOCK ---
if __name__ == "__main__":
    sol = Solution()
    
    n1 = [4, 1, 2]
    n2 = [1, 3, 4, 2]
    
    result = sol.nextGreaterElement(n1, n2)
    
    print(f"Nums1: {n1}")
    print(f"Nums2: {n2}")
    print(f"Result: {result}") 
    # Expected: [-1, 3, -1]