#include <iostream>
#include <vector>
#include <map>
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

// Brute Force Approach - Delete the size-n+1 th node from the start
// Node* deleteFromPosition(Node* head, int k){
//   if(head == NULL) return head; 
//   Node* temp = head;
//   if(k==1){  
//    Node* newHead  = head->next;
//     delete head;
//     return newHead;
//   }
//    int count=0; Node* prev=NULL;
//   while (temp!=NULL)
//   { 
//     count++; 
//     if(count==k){
//       prev->next = prev->next->next;
//       free(temp);
//       break;
//     }
//     prev=temp;
//     temp=temp->next;
//   }  
//   return head; 
// }
// Node* removeNodeFromLast(Node* head, int n){
//   if(head==NULL || head->next==NULL) return NULL;
//   Node* temp = head;
//   int cnt1= 0;
//   while (temp!=NULL)
//   {
//     cnt1++;
//     temp = temp->next;
//   }
//   int k = cnt1 - n +1; 
//   temp = head; 
//   return deleteFromPosition(head,k); 
// } 

// Optimal Approach - Using fast and slow pointer
 
Node* removeNodeFromLast(Node* head, int n){
  Node* fast = head;
  for (int i = 0; i < n; i++)
  {
    fast = fast->next;
  }
  
  if(fast->next==NULL) return head->next;

  Node* slow = head;
  while (fast->next!=NULL)
  {
    slow = slow->next;
    fast = fast->next;
  }
  
  Node* deleteNode = slow->next;
  slow->next = slow->next->next;
  delete deleteNode;
  return head;
} 


int main()
{
  vector<int> arr = {1,2,3,4,5 };
  Node* head = convertArr2LL(arr);
  Node* newHead = removeNodeFromLast(head,3);
  print(newHead);
  return 0;
}
