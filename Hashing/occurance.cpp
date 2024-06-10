#include <iostream>
#include <vector>
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
  int hash[12] = {0};
  int count = 0;
 

  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] = hash[arr[i]]+1;
  } 

  int q;
  cin>>q;
  while (q--)
  {
    int n;
    cout<< "occurence of ";
    cin >>n;
    // prefetch
    cout<<hash[n]<<endl;
  }
  
for (int i = 0; i < sizeof(hash); i++)
{
  cout<<hash[i]<<" ";
}

  return 0;
}
