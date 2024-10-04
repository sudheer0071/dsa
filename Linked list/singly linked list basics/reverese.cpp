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
 
// Brute force Approach - using stack 

// Optimal Approacch 1
// Node* reverse(Node* head){
//   Node* temp =  head;
//   Node* last = NULL;
//   while (temp!=NULL)
//   {
//     cout<<"sindie"<<endl;
//     Node* front = temp->next;
//      temp->next = last; 
//      last = temp;
//      temp = front;
//   }
//   return last;
// } 


// Optimal Approacch 2
Node* reverse(Node* head){

  if (head == NULL || head->next == NULL) {
        return head;
    }
  
  Node* newHead = reverse(head->next);

  Node* front = head->next;
  front->next = head;
  head->next = nullptr;
  return newHead;
} 

int main()
{
  vector<int> arr = {1,2,3,4};
  Node* head = convertArr2LL(arr);
  Node* new_head = reverse(head);
  print(new_head);
  return 0;
}
