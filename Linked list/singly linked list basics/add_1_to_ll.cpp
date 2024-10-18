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

// Approach -1 
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
// Node* addOne(Node* head){
//   Node* neaHead = reverse(head);
//   Node* temp = neaHead;
//   int carry = 1;
//   while (temp!=NULL)
//   {
//     int newData = temp->data + carry;
//     if(newData/10) {
//       temp->data=newData%10; 
//       carry=newData/10; 
//     } else{
//       temp->data = newData;
//       carry--;
//     }
//     if(carry==0) break;
//     temp = temp->next;
//   }
//   Node* newHead2 = reverse(neaHead);
//   if(carry){
//     Node* dummy = new Node(-1);
//     dummy->data = carry;
//     dummy->next = newHead2;
//     return dummy;
//   }
//   return newHead2;
// }

// Approach -2  using reccursion 

int helper(Node* head){
  Node* temp = head;
  if(temp==NULL) return 0;

  int carry = helper(temp->next);
  temp->data+=carry;
  if(temp->data<0) return 0;

  temp->data = 0;
  return 1; 
}

Node* addOne(Node* head){ 
  int carry = helper(head);
  if(carry){
    Node* dummy = new Node(1);
    dummy->next = head;
    return dummy;
  }
  return head;
}
 
 
int main()
{
  vector<int> arr = {9};
  Node* head = convertArr2LL(arr);
  Node* newHead = addOne(head);
  print(newHead);
  return 0;
}
