def smallestinarray(arr):
    smallest=arr[0]

    for i in range (len(arr)):
        if arr[i]< smallest:
            smallest=arr[i]
    return smallest
if __name__=="__main__":
    arr1 = [2, 5, 1, 3, 0]
    smallest=smallestinarray(arr1)
    print("The smallest element of the array is : ", smallest)