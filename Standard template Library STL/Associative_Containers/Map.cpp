#include <iostream>
#include <map>
using namespace std;
//  complexity in map is O(logn)
int main()
{
  map<int, string> m;

  m[1]="John";
  m[13]="Kumar";
  m[2]="Wick";

  m.insert({5,"sfsi"});
  cout<<"Before erase"<<endl;
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }
  cout<<"finding 13 => "<<m.count(-13)<<endl;

m.erase(5);
 cout<<"After erase"<<endl;
  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
  }

auto it = m.find(2);
for(auto i=it;i!=m.end(); i++){
  cout<<(*i).first<<" ";

}cout<<endl;


  return 0;
}
