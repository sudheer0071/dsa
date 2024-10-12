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

// // Brute force Appraoch - store in stack and then traverse by comparing its value with list  
// Node* segretateEvenOdd(Node* head){
//   Node* temp = head;
//   vector<int> odd;
//   vector<int> even;
//   while (temp!=NULL)
//   { 
//     if(temp->data%2==1){
//       odd.push_back(temp->data);
//     } else{ 
//       even.push_back(temp->data);
//     }
//     temp = temp->next;
//   }
//  Node* newHead ;
// if(odd.empty()) {
//  newHead = new Node(even[0]);  
// }else{
//  newHead = new Node(odd[0]);  
// } 
// Node* oddNode = newHead;  
// for (int i = 1; i < odd.size(); i++)  // Start from 1, as the first node is already created
// {
//     oddNode->next = new Node(odd[i]);  // Create a new node for the next element
//     oddNode = oddNode->next;           // Move to the next node
// } 
// // Creating the even list
// // Node* evenHead = new Node(even[0]);  // Create the head of the even list
// Node* evenNode = oddNode;
// for (int i = 0; i < even.size(); i++)  // Start from 1, as the first node is already created
// {
//     evenNode->next = new Node(even[i]);  // Create a new node for the next element
//     evenNode = evenNode->next;           // Move to the next node
// }
// evenNode->next = nullptr;  // End the even list
// return newHead;   
// }


// Optimal Approach - Split he LL into 2 and join it;
// Node* segretateEvenOdd(Node* head){
//    Node* oddhead = new Node(-1), *oddtail = oddhead;
//    Node* evenhead = new Node(-1), *eventail = evenhead;
//    Node* cur = head, *temp;
//    while (cur)
//    {
//      temp = cur;
//      cur = cur->next;
//      temp->next = nullptr;
//      if (temp->data&1) // odd check
//      {
//        oddtail->next = temp;
//        oddtail = temp;
//      }else{ 
//        eventail->next = temp;
//        eventail = temp;
//      } 
//    }
//    eventail->next = oddhead->next;
//    return evenhead->next;
// }

// Similar Problem on leetcode - with little different approach
Node* segretateEvenOdd(Node* head){
    if (head == nullptr || head->next == nullptr)
            return head; 

  Node* odd = head;
  Node* even = head->next;
  Node* temp = even;
  while (even!=nullptr &&  even->next!=nullptr)
  {
    odd->next = odd->next->next;
    even->next = even->next->next;
    odd = odd->next;
    even = even->next;
  }
  odd->next = temp;
  return head;
}
int main()
{
  vector<int> arr = {2,1,3,5,6,4,7};
  Node* head = convertArr2LL(arr);
  Node* newHead = segretateEvenOdd(head);
  print(newHead);
  return 0;
}
