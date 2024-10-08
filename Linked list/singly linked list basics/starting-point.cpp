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

// Brute force Appraoch - store in hashmap
// bool detectLoop(Node* head){
//   map<Node*, int> mp;
//   Node* temp = head;
//   while (temp!=NULL)
//   {
//     if(mp.find(temp)!=mp.end()) return temp;
//       mp[temp]=1;
//       temp=temp->next;
//   }
//   return nullptr;
// } 

// Optimal Appraoch - Using Tortoise and Here and algo
Node* startingNode(Node* head){
   Node* fast = head;
   Node* slow = head;
   while (fast!=NULL || fast->next!=NULL)
   {
       slow = slow->next;
       fast = fast->next->next;
       if(slow == fast){
        slow = head;
        while (slow!=fast)
        {
        slow = slow->next;
        fast = fast->next; 
        
        }
         return slow; 
        
       }
   }
   return nullptr;
} 

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Node* head = convertArr2LL(arr);
  cout<<startingNode(head);
  // print(new_head);
  return 0;
}
