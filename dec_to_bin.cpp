#include <iostream>
using namespace std;
#include <math.h>

int dec_to_bin(int abs)
{
  int ans = 0;
  int base = 1;
  while (abs > 0)
  {
    // int bit = abs % 2;
    int bit = abs & 1;
    ans = ans + bit * base;
    // abs = abs / 2;
    abs = abs >> 1;
    base *= 10;
  }
  return ans;
}

int main()
{
  int n, abs,ne;
  cin >> n;

  if (n < 0)
  {
    abs = -n;
    ne = dec_to_bin(abs);
    cout << "Binary number = -" << ne << endl;
  }
  else
  {
    abs = n;
    ne = dec_to_bin(abs);
    cout << "Binary number = -" << ne << endl;
  }
 
  return 0;
}

// // fro negative number
