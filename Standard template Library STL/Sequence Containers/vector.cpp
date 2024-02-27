#include <iostream>
#include <vector>
using namespace std;
 
  
// ********** vector is a dynamic array **********
int main()
{
  vector<int> a(5,1);
   cout<<"Print a"<<endl;
  for(int i:a){
  cout<<i<<" ";
}cout<<endl;

// copy elements of a in array named "last"
  vector<int> last(a);
  
  cout<<"Print last"<<endl;
  for(int i:last){
  cout<<i<<" ";
}cout<<endl;
  
  vector<int> v;
  cout<<"capacity: "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity: "<<v.capacity()<<endl;
  v.push_back(2);
  cout<<"capacity: "<<v.capacity()<<endl;
  v.push_back(3);
  cout<<"capacity: "<<v.capacity()<<endl; 
  cout<<"Size: "<<v.size()<<endl; 
  cout<<"Element at"<<v.at(1)<<endl;

cout<<"front: "<<v.front()<<endl;
cout<<"before pop"<<endl;
for(int i:v){
  cout<<i<<" ";
}cout<<endl;
// pop from back
v.pop_back();
 
cout<<"after pop"<<endl;
for(int i:v){
  cout<<i<<" ";
}cout<<endl;

  cout<<"Before clear: "<<v.size()<<endl; 
v.clear();
  cout<<"After clear: "<<v.size()<<endl; 

  return 0;
}
