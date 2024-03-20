#include <iostream>
#include <array>

using namespace std;
 
int main()
{
  //*************** normal array ***************
  int basic[4] = {3,5,6,7};
  
  //*************** STL array ***************
 array<int, 4> a = {1,2,3,4};
int size = a.size();
 for (int i = 0; i < size; i++)
 {
  cout<<a[i]<<endl;
 }
 cout<<"element at 2nd index-> "<<a.at(3)<<endl;
 cout<<"Empty or not->"<<a.empty()<<endl;
cout<<a.front()<<endl;
cout<<a.back()<<endl;
  return 0;
}
