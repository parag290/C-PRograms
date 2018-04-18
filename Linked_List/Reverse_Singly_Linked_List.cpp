
#include <iostream>

using namespace std;

struct Node{
   int data;
   Node* next;
};

Node* reverse(Node* head){
    
    Node* current = head;
    Node* prev = NULL;
    Node* next_node;
    
    while(current != NULL){
        next_node = current->next;
        current->next = prev;
        prev = current;
        current = next_node;
    }
    head = prev;
    
    return head;
    
}

int main()
{
    cout<<"Program to reverse a singly Linked List" << endl;
    
    Node* head;
    head = new Node();
    head->data = 1;
    head->next = NULL;
    Node* tail = head;
    
    // Insert Nodes to Linked List  
    for(int i =2; i<=5; i++){
        Node* temp = new Node();
        temp->data = i;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
    
    Node* temp = reverse(head);
    
    // Print Linked List
    while(temp!= NULL){
        cout << temp->data;
        temp = temp->next;
    }

    return 0;
}
