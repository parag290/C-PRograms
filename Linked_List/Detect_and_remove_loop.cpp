
#include <iostream>

using namespace std;

struct Node{
   int data;
   Node* next;
};


void remove_loop(Node* loop_node, Node* head){
    Node* ptr1;
    Node* ptr2;
    
    ptr1 = head;
    while(1){
        ptr2 = loop_node;
        
        while(ptr2->next!= loop_node && ptr2->next!= ptr1){
            ptr2 = ptr2->next;
        }
        
        if(ptr2->next == ptr1){
            break;
        }
        
        ptr1 = ptr1->next;
    }
    cout << ptr2->data;
    ptr2->next = NULL;
}

Node* detect_and_remove_loop(Node* head){
    
    Node* slow = head;
    Node* fast = head;
    
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            cout << "Loop present" << endl;
            remove_loop(slow, head);
            return head;
        }
    }
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
    
    //creating loop as - 1->2->3->4->5->3->4->5->3........
    Node* temp = head;
    for (int i = 0; i<2; i++){
        temp = temp->next;
    }  
    tail ->next = temp;
 
    temp = detect_and_remove_loop(head);
    
    // Print Linked List after removing the loop
    while(temp!= NULL){
        cout << temp->data;
        temp = temp->next;
    }
    return 0;
}
