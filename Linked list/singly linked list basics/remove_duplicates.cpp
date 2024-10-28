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

// Approach
Node* removeDuplicates(Node* head){
  Node* t1 = head;
  Node* t2 = t1->next;
  Node* prev = NULL;

  while (t2!=NULL)
  {
    if(t1->data!=t2->data){
      prev->next = t2;
      t1 = t1->next;
    } else{
      t2 = t2->next;
    }
      prev = t1;
  }
  t1->next=nullptr;
  return head;
}
 
int main()
{
  vector<int> arr = {1,2,3,3,4,4,5};
  Node* head = convertArr2LL(arr);
  Node* new_head = removeDuplicates(head);
  print(new_head);
  return 0;
}
