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

// Brute Force Approach - convert LL to arrays and then sort array then add  data in LL

// Better Approach - store number of 0s, 1s, 2s in count variable and then fill the linked list acccordingly
// Node* sort0_1_2(Node* head){
//   Node* temp = head;
//   int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//   while (temp!=NULL)
//   {
//     if (temp->data == 0)  cnt0++;
//     else if(temp->data == 1) cnt1++;
//     else cnt2++;
//     temp = temp->next;
//   } 
//   temp = head; 
//   while (temp!=NULL)
//   {
//     if(cnt0) {temp->data = 0; cnt0--;}
//     else if(cnt1) {temp->data = 1; cnt1--;}
//     else{ temp->data = 2; cnt2--;}
//     temp = temp->next;
//   }
//   return head; 
// }
 
// Optimal Approach - Sorting in single pass
Node* sort0_1_2(Node* head){
  Node* temp = head;
  Node* zeroHead = new Node(-1);
  Node* oneHead = new Node(-1);
  Node* twoHead = new Node(-1);

  Node* zero = zeroHead;
  Node* one = oneHead;
  Node* two = twoHead;

  while (temp!=NULL)
  { 
    if(temp->data==0){
      zero->next = temp;
      zero = zero->next; 
    }else if (temp->data == 1)
    {
      one->next = temp;
      one = one->next; 
    } else{
      two->next = temp;
      two = two->next; 
    }
    temp = temp->next; 
  } 
  
  zero->next = (oneHead->next)? oneHead->next:twoHead->next;
  one->next = twoHead->next;
  twoHead->next = NULL; 
  Node* newHead = zeroHead->next;
  delete zeroHead;
  delete oneHead;
  delete twoHead;
return newHead; 
}
 

 


int main()
{
  vector<int> arr = { 1,2,2,1,2,0,2,2 };
  Node* head = convertArr2LL(arr);
  Node* newHead = sort0_1_2(head);
  print(newHead);
  return 0;
}
