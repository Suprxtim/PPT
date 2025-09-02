#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at head function
void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);  // create new node
    newNode->next = head;           // point new node to current head
    head = newNode;                 // move head to new node
}

// Display linked list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Driver code
int main() {
    Node* head = NULL;  // start with empty list

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    display(head);

    return 0;
}
