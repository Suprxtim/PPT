class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == target) {
                return {left, right};   // return the indices
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {-1, -1};   // not found
    }
};
