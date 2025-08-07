#include <iostream>
using namespace std;
int largestElement(int arr[], int n) {
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    int arr[1000];
    cout<<"enter the number of elements:";
    cin>>n;
    cout << "Enter " << n << " elements:\n";
    for(int i=0;i<n;i++){
         cin >> arr[i];
    }
     cout << "Largest Element = " << largestElement(arr, n) << endl;
     return 0;
}