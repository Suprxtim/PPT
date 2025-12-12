#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> sumClosest(vector<int> &arr, int target) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<int> res;
    int minDiff = INT_MAX;

    int left = 0, right = n - 1;

    while (left < right) {
        int currSum = arr[left] + arr[right];

        // check if this pair is closer than the closest
        // pair so far
        if (abs(target - currSum) < minDiff) {
            minDiff = abs(target - currSum);
            res = {arr[left], arr[right]};
        }

        // if this pair has less sum, move to greater values
        if (currSum < target)
            left++;

        // if this pair has more sum, move to smaller values
        else if (currSum > target)
            right--;

        // If this pair has sum = target, return it
        else
            return res;
    }

    return res;
}

int main() {
    vector<int> arr = {5, 2, 7, 1, 4};
    int target = 10;

    vector<int> res = sumClosest(arr, target);
    if(res.size() > 0)
    	cout << res[0] << " " << res[1];
    return 0;
}





/*brute force solution down below
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> sumClosest(vector<int> &arr, int target) {
    int n = arr.size();

    vector<int> res;
    int minDiff = INT_MAX;

    // Generating all possible pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            int currSum = arr[i] + arr[j];
            int currDiff = abs(currSum - target);

            // if currDiff is less than minDiff, it indicates
            // that this pair is closer to the target
            if (currDiff < minDiff) {
                minDiff = currDiff;
                res = { min(arr[i], arr[j]), max(arr[i], arr[j]) };
            }

            // if currDiff is equal to minDiff, find the one with 
            // largest absolute difference
            else if (currDiff == minDiff && 
                       (res[1] - res[0]) < abs(arr[i] - arr[j])) {
                res = { min(arr[i], arr[j]), max(arr[i], arr[j]) };
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {5, 2, 7, 1, 4};
    int target = 10;

    vector<int> res = sumClosest(arr, target);
    if(res.size() > 0)
    	cout << res[0] << " " << res[1];

    return 0;
}*/