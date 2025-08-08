#include <iostream>
using namespace std;
int secondlargestElement(int arr[], int n){
    int largest=arr[0];
    int slargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest ){
            slargest=arr[i];
        }
}
return slargest;
}
int main(){
    int n;
    int arr[1000];
    cout<<"enter the number of elements:";
    cin>>n;
    cout << "Enter " << n << " elements:\n";
    for(int i=0;i<n;i++){
         cin >> arr[i];
    }
    cout << "second largest Element = " << secondlargestElement(arr, n) << endl;
    return 0;
}