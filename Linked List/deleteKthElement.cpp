#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;         // Data of the node
    Node* next;       // Pointer to the next node in the list
    // Constructor for a node with both data and next node provided
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    // Constructor for a node with only data provided, next initialized to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* deleteK(Node* head, int k){

    if(head == NULL) return head;

    if(k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }


    int count=0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        count++;

        if(count == k){
            prev->next == prev->next->next;
            free(temp);
            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}