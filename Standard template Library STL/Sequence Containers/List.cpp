#include <iostream>
#include <list>
using namespace std;
 
int main()
{
  list <int> l;
 
list <int> n(5,100);
cout<<"Printing n"<<endl;
for(int i:n){
    cout<<i<<" ";
  }
  cout<<endl;

  l.push_back(1);
  l.emplace_back(4);
  l.push_front(2);
  l.push_back(5);

  for(int i:l){
    cout<<i<<" ";
  }
  
  // l.erase(l.begin());
  // cout<<"after erase"<<endl;
  // for(int i:l){
  //   cout<<i<<" ";
  // }
  // cout<<"size of list: "<<l.size();
}
