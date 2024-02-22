#include <iostream>
using namespace std;
 
int main()
{
  int i,j,n;
  cout<<"Enter a number: ";
  cin>>n;
    // int count = 1;
  for(i=1; i<=n; i++)
  {
    // for(j=1; j<=i; j++)
    for(j=i; j<2*i; j++)
    {
      // cout<<"*";
      // cout<< j;
      // cout<< i;
      cout << j;
      // cout << count;
      // count++;
    
    }
    cout<<endl;
  }
  return 0;
}
