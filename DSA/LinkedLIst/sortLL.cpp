#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *temp = NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Finding the middle element
        while(fast != NULL && fast->next != NULL) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }   
        temp->next = NULL; // Break the list into two halves
        
        ListNode* l1 = sortList(head);
        ListNode* l2 = slow; // slow is the start of the second half
        
        // Re-assigning l2 to the sorted version of the second half
        l2 = sortList(l2);
        
        return mergelist(l1, l2);
    }
    
    ListNode* mergelist(ListNode *l1, ListNode *l2) {
        ListNode *ptr = new ListNode(0);
        ListNode *curr = ptr;
        
        while(l1 != NULL && l2 != NULL) {
            if(l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        
        if(l1 != NULL) curr->next = l1;
        if(l2 != NULL) curr->next = l2;
        
        return ptr->next;
    }
};

// --- Helper Functions for VS Code Testing ---

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Function to create a linked list from a vector
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    Solution sol;
    
    // Create an unsorted list: 4 -> 2 -> 1 -> 3
    vector<int> data = {4, 2, 1, 3, 5, -1};
    ListNode* head = createList(data);
    
    cout << "Original List: ";
    printList(head);
    
    // Sort the list
    ListNode* sortedHead = sol.sortList(head);
    
    cout << "Sorted List:   ";
    printList(sortedHead);
    
    return 0;
}