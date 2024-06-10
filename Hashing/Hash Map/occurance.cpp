#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  
  // pre computation
  map<int , int> map;
  for (int i = 0; i < n; i++)
  {
    map[arr[i]]++;
  } 
  int q;
  cin>>q;
  while (q--)
  {
    int n;
    cout<< "occurence of ";
    cin >>n;
    // prefetch
    cout<<map[n]<<endl;
  }
 
 for (auto it : map)
 {
    cout<< it.first<< "=>" << it.second<<endl;
 }
 

  return 0;
}
