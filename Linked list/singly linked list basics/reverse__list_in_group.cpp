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
  
Node* reverse(Node* head){

  if (head == NULL || head->next == NULL) {
        return head;
    }
  
  Node* newHead = reverse(head->next);

  Node* front = head->next;
  front->next = head;
  head->next = nullptr;
  return newHead;
} 

Node* getkthNode(Node* temp, int k){
   k-=1;
   while (temp!=NULL && k > 0)
   {
    k--;
    temp = temp->next;
   }
   return temp;
}

Node* reaverseGroup(Node* head,int k){
  Node* temp = head;
  Node* prevNode = NULL;
  while (temp!=NULL)
  {
    Node* kthNode = getkthNode(temp,k);

    if(kthNode==NULL){
      if(prevNode){
        prevNode->next = temp;
      }
      break;
    }

    Node* nextNode = kthNode->next;
    kthNode->next = NULL;

    reverse(temp);
    
    if(temp == head){
      head = kthNode;
    }else{
      prevNode->next = kthNode;
    }
    prevNode = temp;
    temp = nextNode;
  }
  return head;
}

int main()
{
  vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
  Node* head = convertArr2LL(arr);
  Node* new_head = reaverseGroup(head,3);
  print(new_head);
  return 0;
}
