#include <iostream>
using namespace std;

void rotateleft(int a[], int n) {
    int k = 3;
    int temp[n];
    for (int i = 0; i < n-k; i++) {
        temp[i] = a[i+k];
    }
    for (int i = 0; i < k; i++) {
        temp[n-k+i] = a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 4;
    int a[] = {1,2,3,4};
    rotateleft(a, n);
}
