class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        # Compare the frequency of characters
        return Counter(s) == Counter(t)