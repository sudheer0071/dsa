#include <iostream>
#include <vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  public:
  Node(int data1, Node* next1, Node* prev1){
    data=data1;
    next=next1;
    prev=prev1;
  }
  Node(int data1){
    data=data1;
    next=nullptr;
    prev=nullptr;
  }

};

Node* convertArrToDLL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* prev = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node* temp = new Node(arr[i],nullptr,prev);
    prev->next = temp;
    prev = temp;
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

int main()
{
  vector<int> arr = {2,3};
  Node* head = convertArrToDLL(arr); 
  print(head);
  return 0;
}
