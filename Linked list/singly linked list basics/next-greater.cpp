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

vector<int> nextGreater(Node *head )
{
  vector<int> ans;
  Node *temp = head;
  while (temp!=NULL)
  {
    if (temp->data < temp->next->data)
    {
      // ans.push_back(temp->next->data);
      cout<<"sdfasd"<<endl;
    }
    else{
      ans.push_back(0);
    }
    temp = temp->next;
  }
      cout<<"insisde";  
  cout<<ans.size();
  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
  //  cout<<end;
  return ans;
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
  vector<int> arr = {2,1,5};
  Node *head = convertArrToDLL(arr);
  nextGreater(head);
  // print(newHead);
  return 0;
}
