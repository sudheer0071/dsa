#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;
 
int main()
{
  string n;
  cin >> n;
   
  
  // pre computation
  unordered_map<char , int> map;
  for (int i = 0; i < n.size(); i++)
  {
    map[n[i]]++;
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
