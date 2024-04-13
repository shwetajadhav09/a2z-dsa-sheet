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


