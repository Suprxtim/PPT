import heapq
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq={}

        for x in nums:
            if x not in freq:
                freq[x]=1
            else:
                freq[x]+=1
        heap=[]

        for num,count in freq.items():
            heapq.heappush(heap,(count,num))

            if len(heap)>k:
                heapq.heappop(heap)
        result=[]

        for count,num in heap:
            result.append(num)
        return result

