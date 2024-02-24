#include <iostream>
using namespace std;
 
long long int sqrtt(int n){ 
  int arr[n];
  int s= 0;
  int e = n;
  long long int mid = s + (e-s)/2;
  long long int ans;
  while (s<=e)
  { 
    if (mid*mid == n)
    {
      return mid;
    }
    
    if (mid*mid<n)
    {
      ans = mid;
      s = mid+1;
    } 
    else 
    {
      e = mid -1;
    } 
    mid = s + (e-s)/2;
  }
  return ans;
}

double more_precision(int n, int precesion, int temp){ 
   double factor = 1;
   double ans = temp;

   for (int i = 0; i < precesion; i++)
   {
    factor = factor/10;
    for (double j = ans; j*j < n; j= j+factor)
    {
      ans = j;
    }
    
   }
   return ans;
  }

int main()
{
  int a;
  cin >>a;
  int temp = sqrtt(a);
  cout << "square root of "<< a<< " is: "<< more_precision(a, 2, temp);

  return 0;
}
