#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
class Node{
  public:
   int data;
   Node* next;
   Node* random;

   public:
   Node(int data1, Node* next1, Node* random1){
    data=data1;
    next = next1;
    random = random1;

   }
   public:
   Node(int data1){
    data = data1;
    next = nullptr;
    random =  nullptr;
   }
}; 

void print(Node *head) {
    while (head != nullptr) {
        cout << "Data: " << head->data;
        if (head->random != nullptr) {
            cout << ", Random: " << head->random->data;
        } else {
            cout << ", Random: nullptr";
        }
        cout << endl;
         // Move to the next node
        head = head->next;  
    }
}

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
 
// Brute force Approach - Using hashmap  
// Node* cloneLL(Node* head){
//    Node* temp = head;
//    map<Node*, Node*> mpp;
//    while (temp!=NULL)
//    {
//    Node* newNode = new Node(temp->data); 
//     mpp[temp] = newNode;
//     temp = temp->next;
//    } 
//    temp = head;
//    while (temp!=NULL)
//    {
//     Node* copyNode = mpp[temp];
//     copyNode->next = mpp[temp->next];
//     copyNode->random = mpp[temp->random];
//     temp = temp->next;
//    }
//    return mpp[head];
// }

// Optimal Approach - by using  
Node* cloneLL(Node* head){
  if(!head) return nullptr;
   Node* temp = head;

// creating the copied Node in between
   while (temp!=NULL)
   {
    Node* copy = new Node(temp->data);
    copy->next = temp->next;
    temp->next = copy;
    temp = temp->next->next;
   }
   
// connecting the randome Nodes of copied LL
temp = head; 
while (temp!=NULL)
{
  Node* copyNode = temp->next;
  if(temp->random){
    copyNode->random = temp->random->next;
  } else{
    copyNode->random = NULL;
  }
  temp = temp->next->next;
  // temp1 = temp1->next->next;
cout<<"inside"<<endl;
}


// connecting the next Nodes of copied LL

temp = head; 
Node* dummy = new Node(-1);
Node* res = dummy;
while (temp!=NULL)
{
   res->next = temp->next;
   res = res->next; 
   temp->next = temp->next->next; 
   temp = temp->next;
}

return dummy->next;

}

int main()
{ 
     Node* head = new Node(7);
    head->next = new Node(14);
    head->next->next = new Node(21);
    head->next->next->next = new Node(28);

    // Assigning random pointers
    head->random = head->next->next;

    head->next->random = head;
    head->next->next->random = head->next->next->next;
    head->next->next->next->random = head->next;
  print(head);
  cout<<endl;
  Node* new_head = cloneLL(head);
  print(new_head);
  return 0;
}
 