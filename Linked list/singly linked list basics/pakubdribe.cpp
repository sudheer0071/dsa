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

// Brute force Appraoch - store in stack and then traverse by comparing its value with list 

// Optimal Approach - Using Tortoise and Here algorithm

Node* reverse(Node* head){
  // cout<<"inside"<<endl; 
  if(head==NULL || head->next==NULL) return head;
  Node* temp = head;
  Node* last = NULL;
  while (temp!=NULL)
  {
    Node* front = temp->next;
    temp->next = last;
    last = temp;
    temp = front;
  }
  return last;
}

bool isPalindrome(Node* head){
  if(head==NULL || head->next==NULL) return true;

  Node* slow = head;
  Node* fast = head;
  while (fast->next!=NULL && fast->next->next!=NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  
  Node* first = head;Node* second;
  if(slow->next==NULL) { 
    cout<<"inside";
  second = reverse(slow);
  } else{
    second = reverse(slow->next);
  }
  cout<<slow->data<<endl;
  while (second!=NULL)    
  { 
    if(first->data != second->data) {
     reverse(second); 
    return false;
    }
    first = first->next;
    second = second->next;
  }
  return true;
}
 
int main()
{
  vector<int> arr = {1,1,2,1};
  Node* head = convertArr2LL(arr);
  cout<<isPalindrome(head);
  // print(new_head);
  return 0;
}
