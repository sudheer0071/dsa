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

// Brute Force Approach - store in stack
// Node* reverseDll(Node* head){
//    stack <int> st;
//    Node* temp = head;
//    while (temp!=NULL)
//    {
//       st.push(temp->data);
//       temp = temp->next;
//    } 
//    temp=head;
//  while (temp!=NULL)
//  {
//     temp->data = st.top();
//     st.pop();
//     temp= temp->next;
//  }
//  return head;
// }

// Optimal Approach - reverse the prev and next node of DLL;
Node* reverseDll(Node* head){ 
  if(head==NULL || head->next==NULL) return head;
  Node* last = NULL;
   Node* temp = head; 
   while (temp!=NULL)
   {
      last = temp->prev;
      temp->prev = temp->next;
      temp->next = last;
      temp = temp->prev;
   }
   return last->prev;
}



int main()
{
  vector<int> arr = {4, 5, 1, 2};
  Node* head = convertArrToDLL(arr);  
  Node* newhead = reverseDll(head);  
  print(newhead);
  return 0;
}
