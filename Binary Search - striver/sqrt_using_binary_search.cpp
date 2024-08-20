#include <iostream>
#include <vector>
using namespace std;

int sqrt ( int n){
  int ans;
  int s = 1;
  int e = n;
  while (s<=e)
  {
    int mid = s + (e-s)/2;
    if (mid*mid<=n)
    {
      // ans = mid;
      s = mid+1;
    }else{
      e = mid -1;
    }
    
  }
  return e;
}

int main()
{
  cout<<sqrt(36);
  return 0;
}
