class Solution:
    def removeDuplicate(self, arr):
        seen=set()
        result=[]
        
        for num in arr:
            if num not in seen:
                result.append(num)
                seen.add(num)
        arr[:] = result

        return result  
        

