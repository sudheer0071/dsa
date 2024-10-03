#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

public:
  Node(int data1, Node *next1, Node *prev1)
  {
    data = data1;
    next = next1;
    prev = prev1;
  }
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    prev = nullptr;
  }
};

Node *convertArrToDLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *prev = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = temp;
  }
  return head;
}

Node* inserBeforetHead(Node* head,int val){
   Node* newNode = new Node(val, head, nullptr);
   head->prev=newNode;
   return newNode;
}
 

Node* insertAfterTail(Node* head,int val){
  Node* temp = head;
  while (temp->next!=NULL)    
  {
    temp=temp->next;
  }
  
   Node* newNode = new Node(val, nullptr, temp);
   temp->next=newNode;
   return head;
}

Node* insertBeforeTail(Node* head,int val){
  Node* temp = head;
  while (temp->next!=NULL)    
  {
    temp=temp->next;
  }
   Node* prev = temp->prev;
   Node* newNode = new Node(val, temp, prev);
   temp->prev=newNode;
   prev->next = newNode;
   return head;
}
 
Node* insertKth(Node* head,int val, int k){
  if(k==1) return inserBeforetHead(head, val);
  Node* temp = head;
  int cnt=0;
  while (temp!=NULL)    
  {
    cnt++;
    if(k==cnt) break;
    temp = temp->next;
  }
  // return insertBeforeTail(head,val);
   Node* prev = temp->prev;
   Node* newNode = new Node(val, temp, prev);
   temp->prev=newNode;
   prev->next = newNode;
   return head;
}

void insertBeforeNode(Node* node,int val){
    Node* prev = node->prev;
   Node* newNode = new Node(val, node, prev);
   node->prev=newNode;
   prev->next = newNode; 
}

void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

int main()
{
  vector<int> arr = {4, 5, 1, 2};
  Node* head = convertArrToDLL(arr); 
  // Node* newHead = insertBeforeTail(head, 3); 
  // Node* newHead = insertKth(head, 3,1); 
insertBeforeNode(head->next, 3); 
  print(head);
  return 0;
}
