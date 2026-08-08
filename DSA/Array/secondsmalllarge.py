def seclargest(arr):
    largest=float('-inf')
    secondlargest=float('-inf')
    for i in range (len(arr)):
        if arr[i]> largest:
            secondlargest=largest
            largest=arr[i]
        elif arr[i]> secondlargest and arr[i] != largest:
            secondlargest=arr[i]
    return secondlargest
def secsmallest(arr):
    smallest=float('inf')
    secondsmallest=('inf')
    for i in range (len(arr)):
        if arr[i]< smallest:
            secondsmallest=smallest
            smallest=arr[i]
        elif arr[i]< secondsmallest and arr[i]!= smallest:
            secondsmallest=arr[i]
    return secondsmallest
if __name__=="__main__":
    arr1=[1, 2, 4, 7, 7, 5] 
    secondlargest=seclargest(arr1)
    secondsmallest=secsmallest(arr1)
    print("The second largest element is :",secondlargest)
    print("The second smallest element is :",secondsmallest)