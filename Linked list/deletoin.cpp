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
  for (int  i = 1; i < arr.size(); i++)
  {
    Node* temp = new Node(arr[i]);
    mover->next =  temp;
    mover=temp;
  }
  return head;
}

void print(Node* head){
  while (head!=NULL)
  {
    cout<< head->data<<" ";
    head = head->next;
  }
  
}

Node* removeHead(Node* head){
  if(head == NULL) return head;
  Node* temp = head;
  head = head->next;
  cout<<temp->data<<endl;
  delete temp;
  return head;
}

Node* removeTail(Node* head){
  if(head == NULL || head->next == NULL) return NULL;
  Node* temp = head;
  while (temp->next->next!=NULL)
  {
    temp=temp->next;
  }
  delete temp->next;
  temp->next = nullptr;
  return head;
}

Node* deleteFromPosition(Node* head, int k){
  if(head == NULL) return head; 
  Node* temp = head;
  if(k==1){ 
    head= head->next;
    free(temp);
    return head;
  }
   int count=0; Node* prev=NULL;
  while (temp!=NULL)
  { 
    count++; 
    if(count==k){
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev=temp;
    temp=temp->next;
  }  
  return head; 
}

Node* deleteElement(Node* head, int k){
  if(head == NULL) return head; 
  Node* temp = head;
  if(head->data==k){ 
    head= head->next;
    free(temp);
    return head;
  }
   int count=0; Node* prev=NULL;
  while (temp!=NULL)
  {  
    if(temp->data==k){
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev=temp;
    temp=temp->next;
  }  
  return head; 
}

int main()
{
  vector<int> arr={32,4,7,8};
  Node* head = converArr2LL(arr);  
  head = deleteElement(head,32);
  print(head);
  return 0;
}
