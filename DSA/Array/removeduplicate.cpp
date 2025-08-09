#include<iostream>
using namespace std;
int removeDuplicates(int a[],int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
        else{
            
        }
            
        }
        return (i+1);
    }
 int main(){
    int n;
    int a[1000];
    cout<<"enter the number of elements:";
    cin>>n;
    cout << "Enter " << n << " elements(sorted array):\n";
    for(int i=0;i<n;i++){
         cin >> a[i];
    }
   int length = removeDuplicates(a, n);
    cout << "After removing duplicate elements, number of unique elements = " << length << endl;

    cout << "Unique elements are: ";
    for (int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}