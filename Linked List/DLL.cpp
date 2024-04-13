#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;         // Data of the node
    Node* next; 
    Node* back;      // Pointer to the next node in the list
    // Constructor for a node with both data and next node provided
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    // Constructor for a node with only data provided, next initialized to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

//convert an array to doubly linked list
Node* convertArrToDLL(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* prev = head;

        for(int i=1; i<arr.size(); i++){
            Node* temp = new Node(arr[i], nullptr, prev);
            prev->next = temp;
            prev = prev->next;
        }

        return head;
    }

//delete head
    Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; 
    }

    Node* prev = head;      
   
    head = head->next;    

    head->back = nullptr;   

    prev->next = nullptr;  

    return head;          
}

//delete tail
    Node * deleteTail(Node *head) {

    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* tail = head;

    while(tail->next != NULL){
        tail = tail->next;
    }

    Node* previous = tail->back;
    tail->back = nullptr;
    previous->next = nullptr;

    delete tail;

    return head;
}

Node* removeKthElement(Node* head, int k){

    int count =0;
    Node* temp = head;

    while(temp!=NULL){

        count++;

        if(count == k) break;

        temp=temp->next;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }

    else if(prev == NULL){
        deleteHead(head);

    }

    else if(front == NULL){
        deleteTail(head);

    }
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;

}


//INSERTION

Node* insertBeforeHead(Node* head, int val){
    Node* newHead = new Node(val, head, nullptr);

    head->back = newHead;
    return newHead;
}

Node* insertBeforeTail(Node* head, int val){
    if(head->next == NULL){
        return insertBeforeHead(head, val);
    }
    Node* tail = head;

    while(tail->next != NULL){
        tail = tail->next;
    }

    Node* prev = tail->back;

    Node* newNode = new Node(val, tail, prev);

    prev->next = newNode;
    tail->back = newNode;

    return head;
}