#include <iostream>
#include <vector>
using namespace std;
 
int devideBy2(int divident, int divisor){
  if(divident == divisor) return 1;
  long ans = 0;
  bool sign = true; // positive
  if(divident>= 0 && divisor < 0) sign = false;
  else if(divident <=0 && divisor > 0) sign = false;
  long n = abs(divident); long d = abs(divisor);
  divisor = abs(divisor);
  while (n>=d)  
  {
    int cnt = 0;
    while (n>=(d<<(cnt+1))) cnt++;
    ans+=(1<<cnt);
    n-= (d<<cnt);
  }
    if(ans > 1U<<31 && sign) return INT16_MAX;
    if(ans > 1U<<31 && !sign) return INT16_MIN;
    cout<<"ans= "<<ans<<endl<<"sign = "<<sign<<endl;
    return sign?ans: -ans;
  
} 


int main()
{
  cout<<devideBy2(22,-3);
  return 0;
}
