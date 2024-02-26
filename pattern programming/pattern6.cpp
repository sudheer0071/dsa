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
    int count = 1;
  for(i=1; i<=n; i++)
  { 
    for(j=1; j<=n-i; j++) 
    {  
      cout<< " "; 
    } 
    // int count = i;
    for(j=1; j<=i; j++) 
    { 
      // cout<< "*";
      // cout<< i+j-1;
      cout<< count;
      count++;
    } 
    cout<<endl;
  }
  return 0;
}



/* pattern like this 
for n = 4   ane   
****
***
**
*
*/ 

// int main()
// {
//   int i,j,n;
//   cout<<"Enter a number: ";
//   cin>>n;
//   for(i=1; i<=n; i++)
//   {  
//     for(j=1; j<=n-i+1; j++) 
//     {  
//       cout<< "* "; 
//     }
//     cout<<endl;
//   }
//   return 0;
// }




/* pattern like this 
for n = 4   ane   
****          1111        1234
 ***   and     222         234
  **            33          34
   *             4           4
*/ 
 
// int main()
// {
//   int i,j,n;
//   cout<<"Enter a number: ";
//   cin>>n;
//   for(i=1; i<=n; i++)
//   { 
//     for(j=1; j<=i-1; j++) 
//     {  
//       cout<< " "; 
//     } 
//     // int count = i;
//     for(j=1; j<=n-i+1; j++) 
//     { 
//       cout<< "*"; 
//       // cout<< i+j-1;
//     } 
//     cout<<endl;
//   }
//   return 0;
// }


