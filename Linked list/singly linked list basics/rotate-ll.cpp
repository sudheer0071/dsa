#include <iostream>
#include <vector>
using namespace std;
 
class Node{
  public:
   int data;
   Node* next;

   public:
   Node(int data1, Node* next1){
    data=data1;
    next = next1;
   }
   public:
   Node(int data1){
    data = data1;
    next = nullptr;
   }
}; 

Node* convertArr2LL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}
 
void print(Node* head){
  Node* temp = head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  
}
 
 // Brute Force - Interate LL 2 times
//  Node*  rotate(Node* head, int k){
// if(head==NULL || head->next == NULL) return NULL;
//  for (int i = 0; i <k; i++)
//  {
//   Node* temp = head;
//   Node* prev = NULL;
//   while (temp->next!=NULL)
//   {
//     prev = temp;
//     temp = temp->next; 
//   }  
//    prev->next = nullptr;
//    temp->next = head;
//    head = temp;
//  } 
//   return head;
//  }

// Optimal Approach - 
 Node*  rotate(Node* head, int k){
if(head==NULL || head->next == NULL) return NULL;
   Node* temp = head;
   int len = 1;
   while (temp->next!=NULL)
   {
    ++len;
     temp = temp->next;
   }
   
   temp->next = head;
  int cut = 0; 
  if(len>k){
    cut = len - k; 
  }else{
    cut = k%len;
  } 
 while (cut--) temp = temp->next;
 head = temp->next;
 temp->next = NULL;
 return head;

 }


int main()
{
  vector<int> arr = {1,2,3,4,5};
  Node* head = convertArr2LL(arr);
  Node* new_head = rotate(head, 2);
  print(new_head);
  return 0;
}
