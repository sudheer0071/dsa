#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0, pro = 1, diff;
  cin >> n;
  for (int i = 0; i <= n; i++)
  {
    int res = n % 10;
    pro *= res;
    sum += res;
    n /= 10;
  }
  diff = pro - sum;
  cout << diff;

  // cout << 234/100;
}