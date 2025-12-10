
//USING 2 POINTERS O(N) TIME AND O(1) SPACE#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string& s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;        // <-- Missing in your code
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (obj.isPalindrome(s)) {
        cout << "Yes, it's a palindrome!" << endl;
    } else {
        cout << "No, it's not a palindrome!" << endl;
    }

    return 0;
}
//OPTIMISATION
#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome.
int isPalindrome(string &s){
  
  int len = s.length();

    // Iterate over the first half of the string
    for (int i = 0; i < len / 2; i++){

        // If the characters at symmetric positions are not equal
        if (s[i] != s[len - i - 1])

            // Return 0 (not a palindrome)
            return 0;
    }

    // If all symmetric characters are equal
    // then it is palindrome
    return 1;
}

int main(){
    string s = "abba";
    cout << isPalindrome(s) << endl;

    return 0;
}
//RECURSION 
#include <bits/stdc++.h>
using namespace std;

// Recursive util function to check if a string is a palindrome
int isPalindromeUtil(string & s, int left, int right) {

    // Base case
    if (left >= right) 
        return 1;
    
    // If the characters at the current positions are not equal,
    // it is not a palindrome
    if (s[left] != s[right]) 
        return 0;

    // Move left pointer to the right
    // and right pointer to the left
    return isPalindromeUtil(s, left + 1, right - 1);
}

// Function to check if a string is a palindrome
int isPalindrome(string s){
    int left = 0, right = s.length() - 1;
    return isPalindromeUtil(s, left, right);
}

int main() {
    string s = "abba";
    cout << isPalindrome(s) << endl;

    return 0;
}