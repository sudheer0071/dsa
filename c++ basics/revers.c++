// #include <iostream>
// using namespace std;
// #include <math.h>

// int main()
// {
//   int n,rem ,rev = 0;
//   cin >> n;
//         while(n!=0){
//             rem = n % 10;
//             rev = rem +  rev * 10;
//             n/=10;

//         }
//       cout << rev;

//   return 0;
// }

#include <iostream>
using namespace std;
#include <math.h>

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  int i = 0;

  while (n != 0)
  {
    int bit = n & 1;
    ans = ans + (bit * pow(10, i));
    n = n >> 1;
    i++;
  }
  cout << ans << endl;

  int a = ~ans;
  cout << a;

  return 0;
}
