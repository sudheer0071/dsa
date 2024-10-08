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

// Brute force Appraoch - store in hashmap with count no. of each node

// Optimal Appraoch 1 - Using Tortoise and Here and algo
Node* startingNNode(Node* head){
   Node* fast = head;
   Node* slow = head;
   while (fast!=NULL && fast->next!=NULL)
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

int lengthOfLoop(Node* head){
   Node* start = startingNNode(head);
   Node* temp = start->next;
   int cnt = 0;
   while (temp!=start)
   {
      cnt++;
      if (temp==start) break; 
      temp = temp->next;
      
   }
   return cnt+1;
}

// Optimal Approach 2 - Using Tortoise and Here
int findLength(Node* slow, Node* fast){ 
    int cnt = 1;
     
    fast = fast->next;
     
    while(slow!=fast){ 
        cnt++;
        fast = fast->next;
    } 
    return cnt;
}
 
int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

 
    while (fast != nullptr && fast->next != nullptr) { 
        slow = slow->next;      
        fast = fast->next->next; 
        if (slow == fast) { 
            return findLength(slow, fast);
        }
    } 
    return 0; 
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  Node* head = convertArr2LL(arr);
  cout<<lengthOfLoop(head);
  // print(new_head);
  return 0;
}
