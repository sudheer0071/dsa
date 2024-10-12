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
 
// Optimal Approach - Using Sorting algos like merge sort or quick sort
 
Node* middle(Node* head){
   if(head==NULL || head->next==NULL) return head;
  Node* T = head;
  Node* R = head->next;
  while (R!=nullptr&&R->next!=nullptr)
  {
    T= T->next; 
    R = R->next->next; 
  }
  return T;
} 

Node* mergeSort(Node* head1, Node* head2){
  Node* dummyNode = new Node(-1);
  Node* temp = dummyNode;
  while ( head1!=nullptr && head2!=nullptr)
  {
    if(head1->data <= head2->data){
      temp->next = head1;
      head1 = head1->next;
    }else{
      temp->next = head2;
      head2 = head2->next;
    }
    temp = temp->next;
  }
  if(head1!=nullptr){
    temp->next = head1;
  }else{
    temp->next = head2;
  }
   return dummyNode->next;
}


Node* sortLL(Node* head ){ 
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
   Node* mid = middle(head);

   Node* right = mid->next;
   mid->next = nullptr;
   Node* left = head;

   left = sortLL(left);
   right = sortLL(right);
   return mergeSort(left, right);
} 


int main()
{
  vector<int> arr = { 3,4,2,1,5 };
  Node* head = convertArr2LL(arr);
  Node* newHead = sortLL(head);
  print(newHead);
  return 0;
}
