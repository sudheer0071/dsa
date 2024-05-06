#include <iostream>
#include <vector>
using namespace std;
 
  
// ********** vector is a dynamic array **********
int main()
{
//   vector<int> a(5,1);
//    cout<<"Print a"<<endl;
//   for(int i:a){
//   cout<<i<<" ";
// }cout<<endl;

// // copy elements of a in array named "last"
//   vector<int> last(a);
  
//   cout<<"Print last"<<endl;
//   for(int i:last){
//   cout<<i<<" ";
// }cout<<endl;
  
  vector<int> v;
//   cout<<"capacity: "<<v.capacity()<<endl;
//   v.push_back(1);
//   cout<<"capacity: "<<v.capacity()<<endl;
//   v.push_back(2);
//   cout<<"capacity: "<<v.capacity()<<endl;
//   v.push_back(3);
//   cout<<"capacity: "<<v.capacity()<<endl; 
//   cout<<"Size: "<<v.size()<<endl; 
//   cout<<"Element at"<<v.at(1)<<endl;

// cout<<"front: "<<v.front()<<endl;
// cout<<"before pop"<<endl;
// for(int i:v){
//   cout<<i<<" ";
// }cout<<endl;
// // pop from back
// v.pop_back();
 
// cout<<"after pop"<<endl;
// for(int i:v){
//   cout<<i<<" ";
// }cout<<endl;

//   cout<<"Before clear: "<<v.size()<<endl; 
// v.clear();
//   cout<<"After clear: "<<v.size()<<endl; 

//         iterator in vector
v.push_back(3);
v.push_back(2);
v.push_back(5);
v.push_back(7);
v.push_back(8);
vector<int>::iterator it = v.begin();
// it++;
// cout<<*(it)<<" ";
// it+=2;
// cout<<*(it)<<" "; 

// vector<int>::iterator it = v.end();
// for (auto &&it : v)
// {
//   cout<< it << " ";
// }
//{3,5,7,8}
v.erase(v.begin()+3);
for (int it : v)
{
  cout<< it << " ";
}

v.erase(v.begin()+2, v.begin()+3); // {3} {start, end}

// insert function
vector<int>v(2,100); //{100,100}
v.insert(v.begin(),300); //{300,100,100}
v.insert(v.begin()+1, 2, 20); // {300,20,20,100,100}

vector<int> copy(2,50); //{50,50}
  return 0;
}
