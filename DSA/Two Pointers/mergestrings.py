class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i=0
        n,m=len(word1),len(word2)
        myarray=[]
        for i in range(max(n,m)):
            if i<n:
                myarray.append(word1[i])
            if i < m:
                myarray.append(word2[i])
        return "".join(myarray)
