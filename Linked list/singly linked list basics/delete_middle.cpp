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

// Brute Force Approach - get the size n then delete n/2th node
 
// Optimal Approach - Using fast and slow pointer
 
Node* deleteFromMid(Node* head ){
  if(head==NULL || head->next==NULL) return NULL;
  Node* fast = head;
  Node* slow = head;
  Node* prev = NULL;
  while (fast!=NULL && fast->next!=NULL)
  {
    prev = slow;
    slow = slow->next;
    fast = fast->next->next;
  } 

  Node* deleteNode = slow;
  prev->next = prev->next->next;
  delete deleteNode;
  return head;
} 


int main()
{
  vector<int> arr = {1,2,3,4,5 };
  Node* head = convertArr2LL(arr);
  Node* newHead = deleteFromMid(head);
  print(newHead);
  return 0;
}
