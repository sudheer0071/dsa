#include <iostream>
#include <vector>
#include <stack>
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
  
void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
 

Node* removeDuplicate(Node* head ){
  Node* temp1 = head;

  Node* temp2 = temp1->next;
while (temp2!=NULL )
{
  if(temp1->data != temp2->data){ 
    temp1->next = temp2;  
    temp2->prev = temp1;  
    temp1 = temp1->next;
  } else{
  temp2 = temp2->next;
  }
}
temp1->next=nullptr;
return head;
}

 
int main()
{
  vector<int> arr = {1,1,1,1,2,2,3,4,4};
  Node* head = convertArrToDLL(arr);  
  Node* newHead = removeDuplicate(head);  
  print(newHead);
  return 0;
}
