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
    next=next1;
  }
public:
Node(int data1){
  data=data1;
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

Node* nodeToBeDeleted (Node* head, int k){
  if(head->next==NULL) return head;
  Node* temp = head;
  while (temp!=NULL)
  {
     if (temp->data == k)
     {
       return temp;
     }
     temp  = temp->next;
  }
 return head; 
}
// Normal Method - where head and node value is needed;
// Node* deleteNode(Node* head, int k){
//   if (head==NULL) return head;
//   Node* temp = head;
//   Node* prev = NULL;
//   if (temp->data==k)
//   {
//     head=head->next;
//     free (temp);
//     return head;
//   } 
//    while (temp!=NULL)
//    {
//     if (temp->data==k)
//     {
//       prev->next = temp->next;
//       free(temp);
//       break;
//     }
//     prev = temp;
//     temp = temp->next;
//    }
//    return head; 
// }
 
// Optimal Approach - wehre oniy that particular node is needed which is to be deleted 
Node* deleteNode(Node* node){
  Node* nextNode = node->next;
  node->data = nextNode->data;
  node->next = nextNode->next;
  delete nextNode;
}
 

int main()
{
  vector<int> arr = {4,5,1,9};
  Node* head = convertArr2LL(arr);
  // Node* newHead = deleteNode(head,1);
  Node* deletee = nodeToBeDeleted(head, 4);
  deleteNode(deletee);
  print(head);
  return 0;
}
