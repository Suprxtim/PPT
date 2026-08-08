def largestinarray(arr):
    largest=arr[0]
    for i in range(len(arr)):
        if arr[i]> largest:
            largest=arr[i]
    return largest
if __name__=="__main__":
    arr1=[2, 5, 1, 3, 0]
    largesthere=largestinarray(arr1)
    print("The largest element in the array is :",largesthere)