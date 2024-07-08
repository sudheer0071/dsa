#include <iostream>
#include <vector>
using namespace std;

class Node
{
  public: 
  int data;
  Node* next;

// constructor
  public:
  Node(int data1,   Node* next1){
       data=data1; 
       next = next1;
  }
  public:
  Node(int data1 ){ 
       data=data1;
       next = nullptr;
  } 
};


Node* converArr2LL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for (int  i = 0; i < arr.size(); i++)
  {
    Node* temp = new Node(arr[i]);
    mover->next =  temp;
    mover=temp;
  }
  return head;
}

int lengthofLL(Node* head){
  int cnt = 0;
  Node* temp = head;
  while (temp)
  {
    temp = temp->next;
    cnt++;
  }
  return cnt;
}
int check(Node* head, int k){
  int cnt = 0;
  Node* temp = head;
  while (temp)
  {
    if(temp->data==k) return 1;
    temp = temp->next; 
  }
  return 0;
}

int main()
{
  vector<int> arr={2,4,7,8};
  Node* head = converArr2LL(arr); 
  Node* temp = head;
  int count = 0;
  while (temp)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
    count++;
  }
  
  cout<<"find = "<<check(head, 34);
  return 0;
}
