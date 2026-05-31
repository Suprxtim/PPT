class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        i=0
        ans=[]
        for i in range(n):
            ans.append(nums[i])
            ans.append(nums[i+n])
        return ans  