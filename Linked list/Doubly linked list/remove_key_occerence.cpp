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

Node *removeKthElement(Node *head, int k)
{
  Node *temp = head;
  while (temp != NULL)
  {
    // cnt++;
    if (temp->data == k)
    {
      if (temp == head)
      {
        cout << "inside" << endl;
        head = temp->next;
      }
      Node *prev1 = temp->prev;
      Node *next1 = temp->next;
      if (prev1 != NULL) next1->prev = prev1;
      if (next1 != NULL) prev1->next = next1;
      delete temp;
      temp = next1;
    }
    else
    {
      temp = temp->next;
    }
  }
  cout << "reacched" << endl;
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

int main()
{
  vector<int> arr = {4, 5, 1, 2};
  Node *head = convertArrToDLL(arr);
  Node *newHead = removeKthElement(head, 4);
  print(newHead);
  return 0;
}
