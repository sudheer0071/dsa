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

// Brute Force Approach - Itereate through every node and if 2 nodes are equal requrn that node;

// Better Approach - store every nodes of any LL in hash , and check in other LL if particular node is equal to the node in hash;
 
// Optimal Approach - using the difference in 2 LL;
Node* intersection(Node* head1, Node* head2){
 Node* d1 = head1;
 Node* d2 = head2;

 while (d1!=d2)
 {
    d1 = (d1==NULL)?head2: d1->next;
    d2 = (d2==NULL)?head1: d2->next;
 }
 
  cout<<d2->data;
 return d1;
}
 

 


int main()
{
  vector<int> arr1 =  {1,3,1,2,4};
  vector<int> arr2 =  {3,2,4};
  Node* head1 = convertArr2LL(arr1);
  Node* head2 = convertArr2LL(arr2);
  Node* newHead = intersection(head1, head2);
  cout<<newHead->data<<endl;
  return 0;
}
