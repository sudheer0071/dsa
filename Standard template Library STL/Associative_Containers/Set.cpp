#include <iostream>
#include<set>
using namespace std;
 
int main()
{
  // returns element in a sorted manner
  set<int> s;
  s.insert(3);
  s.insert(1);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(5);
  s.insert(2);
  s.insert(9);

  for(int i:s){
    cout<<i<<endl;
  }
cout<<endl;
  set<int>::iterator it = s.begin();
  it++;
  s.erase(it);
  for(auto i:s){
    cout<<i<<endl;
  }
cout<<endl;
// cout will check that element is present or not
cout<<s.count(3)<<endl;

set<int>::iterator itr = s.find(3);
for(auto it=itr;it!=s.end(); it++){
  cout<<*it<<" ";

}
cout<<endl;

  return 0;
}
