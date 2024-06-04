#include <iostream>
using namespace std;
 
/* pattern like this 
for n = 3   ane   
    A A A          A B C
    B B B          A B C
    c c c          A B C
*/       

// int main()
// {
//   int i,j,n;
//   cout<<"Enter a number: ";
//   cin>>n;
//   char a='A';
//   for(i=1; i<=n; i++)
//   {
//     a = 'A';
//     // a = 'A' + i-1;
//     for(j=1; j<=n; j++) 
//     {
//       cout<< a << " ";
//       a = 'A' + j;
//     }
//     cout<<endl;
//   }
//   return 0;
// }
 
/* pattern like this 
for n = 3  
    A B C 
    B C D  
    C D E
*/

// int main()
// {
//   int i,j,n;
//   cout<<"Enter a number: ";
//   cin>>n;
//   char a='A';
//   for(i=1; i<=n; i++)
//   {
//     // a = 'A' + i-1;
//   a = 'A';
//     for(j=1; j<=n; j++) 
//     {
//       cout<< a << " ";
//       a++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }



/* pattern like this 
for n = 3  
    A           A           A
    B B         B C         B C 
    C C C       C D E       D E F
*/
  
// int main()
// {
//   int i,j,n;
//   cout<<"Enter a number: ";
//   cin>>n;
//   char a='A';
//   for(i=1; i<=n; i++)
//   {
//     a = 'A'+i-1;
//     for(j=1; j<=i; j++) 
//     {
//       cout<< a << " ";
//       a++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }
 
/* pattern like this 
for n = 4  
    D 
    C D
    B C D 
    A B C D
*/

int main()
{
  int i,j,n;
  cout<<"Enter a number: ";
  cin>>n;
  char a='A';
  for(i=1; i<=n; i++)
  {
    a = 'A'+n-i;
    for(j=1; j<=i; j++) 
    {
      // a = 'A' + n-i+j-1;
      cout<< a << " ";
      a++;
    }
    cout<<endl;
  }
  return 0;
}


