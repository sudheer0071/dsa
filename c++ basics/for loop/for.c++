#include <iostream>
using namespace std;
 
// int main()
// {
//   for (int i = 0; i <= 5; i--)
//   {
//     cout << i << endl;
//     i++;
//   }
  
//   return 0;
// }

// output 2

// int main()
// {
//   for (int i = 0; i <= 15; i+=2)
//   {
//     cout << i << " ";
//     if (i&1){
//       continue;
//     }
//     i++;
//   }
//   return 0;
// }

int main()
{
  int n, sum=0, pro=1, diff;
  cin >> n;
  for (int i = 0; i <=n; i++)
  {
    int res = n%10;
    pro*=res;
    sum+=res; 
    n/=10;
  }
    diff = pro - sum;  
  cout << diff;

  // cout << 234/100;
}