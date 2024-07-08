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

Node* insertAthead(Node* head, int k){
  if(head == NULL) return head;
  return new Node(k, head);   
}

Node* insertAtTail(Node* head, int k){
  if(head == NULL ) return new Node(k, nullptr); 
  Node* temp=head;
  while (temp->next!=NULL)
  {   
    temp = temp->next;
  }
  Node* neww = new Node(k, nullptr);
  // cout<<neww->data<<endl;
  temp->next = neww; 
  return head;
}

Node* insertAtPosition(Node* head,int el, int k){
  if(head == NULL) return new Node(el,nullptr);  
  if(k==1){
    return new Node(el, head); 
  }
  Node* temp = head;
  int count=1;
  while (temp!=NULL)
  {   
    count++; 
    if(count==k){
      Node* neww = new Node(el,temp->next);
      temp->next = neww;
    }
    temp=temp->next;
  } 
  return head; 
}

Node* insertBeforeValue(Node* head,int el, int val){ 
  if(head->data==val){
    return new Node(el, head); 
  }
  Node* temp = head;  
  while (temp->next!=NULL)
  {    
    if(temp->next->data==val){
      Node* neww = new Node(el,temp->next);
      temp->next = neww;
      break;
    }
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
  head = insertBeforeValue(head,23,7);
//  head = new Node(6,head);
  print(head);
  return 0;
}
