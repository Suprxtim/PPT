#include <iostream>
using namespace std;

void removeElement(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position" << endl;
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int pos = 2; 

    removeElement(arr, n, pos);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
