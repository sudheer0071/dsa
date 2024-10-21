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

// Brute Force Approach - itereate DLL 2 times

// Optimal Approach - by using the 
vector<pair<int , int>> pairSum(Node* head, int k){
  vector<pair<int, int>> ans;
  Node* temp = head;
  while (temp->next!=NULL)
  { 
    temp=temp->next;
  }
   

  Node* left = head;
  Node* right = temp; 
  while (left->data<right->data)
  {
  int sum = left->data + right->data; 
    if(sum==k){ 
      ans.push_back({left->data,right->data});
      left = left->next;
      right = right->prev;
    }
    else if (sum>k)
    {
       right = right->prev;
    } else{
       left = left->next;
    }
  }
  return ans;
}
 
 
int main()
{
  vector<int> arr = {1,5,6};
  Node* head = convertArrToDLL(arr);  
   pairSum(head,6);  
  // print(head);
  return 0;
}
