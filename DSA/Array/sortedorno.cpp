#include <iostream>
using namespace std;
int isSorted(int a[],int n) {
    for(int i=0;i<n;i++){
         if (a[i] > a[i + 1]) {
            return false; // Not sorted}
        }
    }
    return true; //SORTED
}
int main(){
    int a[1000];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter "<<n<<"number of elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if (isSorted(a, n)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is NOT sorted." << endl;
    }
    return 0;
}