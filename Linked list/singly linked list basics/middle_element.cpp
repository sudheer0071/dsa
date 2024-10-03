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
 
// Brute Force Approach - linarly traverse , get the size and traverse half again 
// Node* middle(Node* head){
//    if(head==NULL|| head->next==NULL) return head;
//   Node* temp = head;
//   int cnt = 0;
//   while (temp!=NULL)
//   {
//     cnt++;
//     temp = temp->next;
//   }
//   int n = cnt/2; 
//   temp = head; 
//   int i;
//   if(cnt%2==1) i = 0;
//   else i = 1;
//   while (i<n)
//   {
//     i++;
//     temp=temp->next;
//   }  
//   if(cnt%2==1) return temp;
//   else return temp->next;
// } 

// Optimal Approach - Tortoise and Rabbit Approach
Node* middle(Node* head){
   if(head==NULL || head->next==NULL) return head;
  Node* T = head;
  Node* R = head;
  while (R!=NULL&&R->next!=NULL)
  {
    T= T->next; 
    R = R->next->next; 
  }
  return T;
} 

int main()
{
  vector<int> arr = {1,2,3,4};
  Node* head = convertArr2LL(arr);
  Node* new_head = middle(head);
  print(new_head);
  return 0;
}
