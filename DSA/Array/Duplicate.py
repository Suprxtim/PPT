class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        n=len(nums)
        nums.sort()

        for i in range(n-1):
            if nums[i]==nums[i+1]:
                return True
            elif n==0 or n==1:
                return False
            else:
                return False