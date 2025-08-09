//Left Rotate the Array by One
#include<iostream>
using namespace std;
void sortLeftOneStep(int a[],int n){
    int temp=a[0];//i took first element in temporary variable
    for(int i=1;i<n;i++){
       a[i-1]=a[i];
    }
    a[n-1]=temp;
}
int main(){
    int n;
    int a[1000];
    cout<<"enter the number of elements:";
    cin>>n;
    cout << "Enter " << n << " elements:\n";
    for(int i=0;i<n;i++){
         cin >> a[i];
    }
    sortLeftOneStep(a, n);

    cout << "The array rotated to the left = ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
