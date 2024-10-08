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
//     if(mp.find(temp)!=mp.end()) return true;
//       mp[temp]=1;
//       temp=temp->next;
//   }
//   return false;
// } 

// Optimal Appraoch - Using Tortoise and Here and algo
bool detectLoop(Node* head){
  map<Node*, int> mp;
  Node* slow = head;
  Node* fast = head;
  while (fast!=nullptr || fast->next!=nullptr)
  {
     slow = slow->next;
     fast = fast->next->next;
     if(fast == slow) return true;
  }
  return false;
} 

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Node* head = convertArr2LL(arr);
  cout<<detectLoop(head);
  // print(new_head);
  return 0;
}
