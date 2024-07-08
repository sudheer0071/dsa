#include <iostream>
#include <vector>
using namespace std;

class Node
{
  public:
  int age;
  int data;
  Node* next;

// constructor
  public:
  Node(int data1, int age1, Node* next1){
       data=data1;
       age=age1;
       next = next1;
  }
  public:
  Node(int data1 , int age1){
       age=age1;
       data=data1;
       next = nullptr;
  } 
};


int main()
{
  vector<int> arr={2,4,7,8};
  Node* y = new Node(arr[2], arr[3] );
  Node* z = new Node(arr[2], arr[3] );
  cout<<y->age;
  return 0;
}
