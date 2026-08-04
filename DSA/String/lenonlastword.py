class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        ans=0
        n=len(s)-1

        while s[n] == " ":
            n-=1
        
        for ch in s[n::-1]:
            if ch == " ":
                break
            ans+=1
        return ans