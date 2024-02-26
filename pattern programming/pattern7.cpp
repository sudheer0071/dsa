#include <iostream>
using namespace std;
 

/* pattern like this 
for n = 4   ane   
   *         1           1
  **        23          23
 ***       456         345  
****      78910       5678
    
    
*/ 

int main()
{
  int i,j,n;
  cout<<"Enter a number: ";
  cin>>n;
    // int count = 1;
  for(i=1; i<=n; i++)
  { 
    for(j=1; j<=n-i; j++) 
    {  
      cout<< " "; 
    } 
    // int count = 1;
    for(j=1; j<=i; j++) 
    { 
      cout<< "*";
      // cout<< i+j-1;
      // cout<< j;
      // count++;
    } 
    int count1 = i-1;
    for(j=1; j<=i-1; j++) 
    { 
      cout<< "*";
      // cout<< i+j-1;
      // cout<< count1;
      // count1--;
    } 
    cout<<endl;
  } 
  return 0;
}