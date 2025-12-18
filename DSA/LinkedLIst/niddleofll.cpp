#include <iostream>
using namespace std;

// Definition for singly-linked list.
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// Helper function to insert node at end
void insertAtEnd(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Helper function to print list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    ListNode* head = nullptr;

    // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    cout << "Linked List: ";
    printList(head);

    Solution sol;
    ListNode* middle = sol.middleNode(head);

    cout << "Middle Node Value: " << middle->val << endl;

    retu
