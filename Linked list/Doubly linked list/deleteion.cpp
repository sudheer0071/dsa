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

Node *removeHead(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;

  Node *temp = head;
  head = temp->next;
  head->prev = nullptr;
  temp->prev = nullptr;
  delete temp;
  return head;
}

Node *removeTail(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  Node *perv1 = temp->prev;
  perv1->next = nullptr;
  delete temp;
  return head;
}

Node *removeKthElement(Node *head, int k)
{
  if (head == NULL)
    return NULL;

  int cnt = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    if (cnt == k) break;
    temp = temp->next;
  }
  Node *prev1 = temp->prev;
  Node *next1 = temp->next;

  if (prev1 == NULL && next1 == NULL)
    return NULL;
  else if (prev1 == NULL) { 
    return removeHead(head);
  }
  else if (next1 == NULL)
    return removeTail(head);
 else{
  prev1->next = next1;
  next1->prev = prev1;
  temp->next = nullptr;
  temp->prev = nullptr;
  delete temp;
  return head;
 }
}

Node* nodeToBeDeleted(Node* head, int val){
  // cout<<head->data<<endl;
  Node* temp = head;
  if(head->data==val){
    cout<<"inside ";
  return head;
  } 
  while (temp!=NULL) 
  {
    if(temp->data==val){
      return temp;
    }
    temp= temp->next;
  }
  return head;
}

void RemoveNode(Node* node){
  Node* prev1 = node->prev;
  Node* next1 = node->next;
  if(next1 == NULL) {
    prev1->next=nullptr;
    node->prev=nullptr;
    delete node;
    return ;
  }
  prev1->next = next1;
  next1->prev = prev1;
  delete node;
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
  // Node* newHead = removeKthElement(head, 4);
  // Node* newHead = removeHead(head);
  Node* deletedNode = nodeToBeDeleted(head, 2);
  RemoveNode(deletedNode);
  print(head);
  return 0;
}
