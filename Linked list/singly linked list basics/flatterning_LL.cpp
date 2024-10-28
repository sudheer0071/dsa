#include <iostream>
#include <vector>
using namespace std;
 
class Node{
  public:
   int data;
   Node* next;
   Node* child;

   public:
   Node(int data1, Node* next1, Node* child1){
    data=data1;
    next = next1;
    child = child1;

   }
   public:
   Node(int data1){
    data = data1;
    next = nullptr;
    child =  nullptr;
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
 
void print(Node* head, int depth) {
    while (head != nullptr) {
        cout << head->data;

        // If child exists, recursively
        // print it with indentation
        if (head->child) {
            cout << " -> ";
            print(head->child, depth + 1);
        }

        // Add vertical bars
        // for each level in the grid
        if (head->next) {
            cout << endl;
            for (int i = 0; i < depth; ++i) {
                cout << "| ";
            }
        }
        head = head->next;
    }
}

void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->child;
    }
    cout << endl;
} 

// Brute force Approach - using stack 

// Optimal Approacch 1

Node* merge(Node* t1, Node* t2){
  Node* Dummy = new Node(-1);
  Node* list = Dummy;

  while (t1!=NULL && t2!=NULL)
  {
    if(t1->data<t2->data){
      list->child = t1;
      list = t1;
      t1 = t1->child;
    }else{
      list->child = t2;
      list = t2;
      t2 = t2->child; 
    }
  }
  list->next = NULL;

  if(t1) list->child = t1;
  else list->child = t2;

  return Dummy->child;   
}

Node* flattern(Node* head){
   if(head == NULL || head->next==NULL) return head;

   Node* mergHead = flattern(head->next);
   return merge(head, mergHead);
} 
 
int main()
{
 Node* head = new Node(5);
    head->child = new Node(14);
    
    head->next = new Node(10);
    head->next->child = new Node(4);
    
    head->next->next = new Node(12);
    head->next->next->child = new Node(20);
    head->next->next->child->child = new Node(13);
    
    head->next->next->next = new Node(7);
    head->next->next->next->child = new Node(17);

  print(head,0);
  cout<<endl;
  Node* new_head = flattern(head);
  printLinkedList(new_head);
  return 0;
}
 