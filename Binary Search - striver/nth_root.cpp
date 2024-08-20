#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int pwr(long long int m, long long int n){
  return pow(m, n);
} 

int nth_root( int n, int m ){
  int s =1, e=n;
  int ans = -1;
  while (s<=e)
  {
    long long int mid = s + (e-s)/2; 
    cout<<mid<<endl;
    if(pwr(mid,m)==n) return mid;
    if (pwr(mid,m)<=n)
    {
      //  ans = mid;
      // cout<<pwr(mid,m)<<endl;
      cout<<"start"<<endl;
        s = mid+1;
    }
    else{ 
      e = mid-1;
    }
  }
  return ans;
}

int main()
{
  cout<<nth_root(69,4);
  return 0;
}
