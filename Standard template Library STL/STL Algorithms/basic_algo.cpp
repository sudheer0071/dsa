#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  cout<<"finding 6... "<<binary_search(v.begin(),v.end(),6);
  cout<<"Lower Bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl; 
  cout<<"Upper Bound "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl; 
  
  int a = 3;
  int b = 5;

 
  // swap
  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());
  cout<<abcd;

  rotate(v.begin(), v.begin()+1,v.end());
  cout<<"after rotate"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }cout<<endl;

  sort(v.begin(),v.end());
   cout<<"after sort"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }
}
