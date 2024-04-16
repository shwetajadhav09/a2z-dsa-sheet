#include<bits/stdc++.h>
using namespace std; 
 
 
 class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
           this->data = data;
           this->next = next;
       }
  };

  Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
   Node* dummyNode = new Node(-1);
   Node* curr = dummyNode;
   Node* temp1 = num1;
   Node* temp2 = num2;
   int carry =0;

   while(temp1 != NULL || temp2 != NULL){
       int sum = carry;
      if(temp1) sum = sum + temp1->data;
      if(temp2) sum = sum + temp2->data;

      Node* newNode = new Node(sum%10);
      carry = sum/10;
      curr->next = newNode;
      curr = curr->next;

      if(temp1) temp1 = temp1->next;
      if(temp2) temp2 = temp2->next;

   }

   if(carry){
       Node* newCarryNode = new Node(carry);
       curr->next = newCarryNode;
   }

   return dummyNode->next;
}