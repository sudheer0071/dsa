#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
  string n;
  cin >> n; 
  for (int i = 0; i < n.size(); i++)
  {
    // cin>>n[i];
    cout<<n[i]<<endl;
  }
  
  // pre computation
  int hash[256] = {0};
  int count = 0;
    
  for (int i = 0; i < n.size(); i++)
  {
    cout<<n[i]<<endl; 
    hash[n[i]] = hash[n[i]]+1;
  }  

  int q;
  cin>>q;
  while (q--)
  {
    char ch;
    cout<< "occurence of ";
    cin >>ch;
    // prefetch
    cout<<hash[ch]<<endl;
  }
  
for (int i = 0; i < 26; i++)
{
  cout<<hash[i]<<" ";
}

  return 0;
}
