#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *convertArr2LL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
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

// Approach
Node *removeDuplicates(Node *head)
{
  Node* temp = head;
  Node* prev = NULL;
  while (temp!=NULL)
  {
    if(temp->next!=NULL && temp->data == temp->next->data){ 
      int val = temp->data;
      while (temp!=NULL && temp->data == val)
      { 
         temp = temp->next;
      }
      cout<<temp->data<<endl;
      if (prev!=NULL)
      {
        prev->next = temp;
      }else{
        head = temp;
      } 
    }
    else{
      prev = temp;
      temp = temp->next;
    }
  }
    return head;
  
}

int main()
{
  vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
  Node *head = convertArr2LL(arr);
  Node *new_head = removeDuplicates(head);
  print(new_head);
  return 0;
}
