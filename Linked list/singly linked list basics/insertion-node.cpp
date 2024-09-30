#include <iostream>
#include <vector>
using namespace std;
 
class Node{
  public:
   int data;
   Node* next;

   public:
   Node(int data1, Node* next1){
    data=data1;
    next = next1;
   }
   public:
   Node(int data1){
    data = data1;
    next = nullptr;
   }
}; 

Node* convertArr2LL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

void print(Node* head){
  Node* temp = head;
  while (temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  
}

Node* InsertAtHead(Node* head, int val){
   Node* temp = new Node(val, head);
   return temp;
}

Node* InsertAtTail(Node* head, int val){
   if(head->next==NULL) return head;
   Node* temp = head;
   while (temp->next!=NULL)
   {
     temp = temp->next;
   }
   Node* newElement = new Node(val);
   temp->next = newElement;
   return head;
}

Node* InsertAtk(Node* head, int val, int k){
   if(head->next==NULL) {
    if(k==1 ) {
      Node* newEle = new Node(val);
      return newEle;
    } 
    return head;
   }
   Node* temp = head;
   if (k==1)
   {
     Node* newEle = new Node(val, head);
     cout<<"inside"<<endl;
    //  temp->next = nullptr;
     return newEle;
   }
   
   int cnt = 1;
   while (temp!=NULL)
   {
     if (k==cnt+1)
     {
       Node* newEle = new Node(val, temp->next);
       temp->next=newEle;
       break;
     }
     cnt++;
     temp=temp->next;
   }
   return head;
}

int main()
{
  vector<int> arr = {1,5,7,2};
  Node* head = convertArr2LL(arr);
  Node* new_head = InsertAtk(head, 3,1);
  print(new_head);
  return 0;
}
