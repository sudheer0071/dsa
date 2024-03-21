#include <iostream>
using namespace std;
 
int main()
{
  int i,j,n;
  cout<<"Enter a number: ";
  cin>>n;
  for(i=1; i<=n; i++)
  {
    int count = i;
    for(j=1; j<=i; j++) 
    {
      // cout<< count << " "; 
      cout<< i-j+1 << " "; 
      count--;
    }
    cout<<endl;
  }
  return 0;
}
 