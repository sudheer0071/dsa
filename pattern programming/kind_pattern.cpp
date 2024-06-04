#include <iostream>
using namespace std;
 
// int main() 
// {
//   int i, j, n;
//   cout << "Enter numer: ";
//   cin >> n;
 
//   for (i = 0; i < n; i++)
//   {
//     for (j = 1; j <= n - i; j++)
//     {
//       cout << " " << j;
//     } 
//     for (j = 1; j <= i; j++)
//     {
//       cout << " *";
//     }

//     for (j = 1; j <= i; j++)
//     { 
//       cout << " *";
//     }
//     cout << " ";
//     int count = n - i; 
//     for (j = 1; j <= n - i; j++)
//     {
//       cout << count << " ";
//       count--;
//     }
//     cout << endl;
//   }

//   return 0;
// }
 
int main() 
{
  int i, j, n;
  cout << "Enter numer: ";
  cin >> n;
 
  for (i = 0; i < n; i++)
  {
    for (j = 1; j <= n - i; j++)
    { 
      cout << " " ;
    } 
    for (j = 0; j <= i; j++)
    {
      if (j == 0)
      {
        cout << "*";
      }else{
      cout << " ";
      }
    }

    for (j = 1; j <= i; j++)
    {  
      if (j == i)
      {
        cout<<"*";
      }else{
      cout << " ";
      }
      
    }
    // cout << " ";
   
    cout << endl;
  }

  return 0;
}
