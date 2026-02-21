class Solution:
    def largest(self, arr):
        if not arr:
            return None
        
        i = 0
        for j in range(0, len(arr)):
            if arr[j] >= arr[i]:
                i = j
        
        return arr[i]


def main():
    # Example input
    arr = [5, 3, 9, 2, 7]

    obj = Solution()
    result = obj.largest(arr)

    print("Array:", arr)
    print("Largest element:", result)


if __name__ == "__main__":
    main()