#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertAtHead(Node* &head, int val){
    Node* newNode= new Node; //creating the node
    newNode->data= val; //putting the value
    newNode->next= head;//linking the new node to the head
    head=newNode;
}

void printList(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout << temp->data;
        temp=temp->next;
    }
    cout << "NULL\n";
}

int main(){
    Node* head= NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
}
