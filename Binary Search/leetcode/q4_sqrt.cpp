#include <iostream>
using namespace std;
 
int sqrt(int n){
  int s = 0,e=n;
  int mid = s + (e-s)/2; 
  int ans;
  while (s<=e)   
  {
   if (mid*mid < n)
   {
    ans = mid;
    s = mid + 1;
    // cout<< "s : "<< s<< endl;
   }
   if (mid*mid > n)
   {
    e = mid - 1;
    // cout<< "e : "<< e << endl;
   }
    if (mid*mid == n)
    {
      return mid;
    }
  mid = s + (e-s)/2;
    // cout<< "s : "<< s<<" and e : "<< e<<endl;
 

  }
  return ans;
}

double more_precision(int n, int precesion, int temp){
  double factor = 1;
  double ans = temp;
  for (int i = 0; i < precesion; i++)
  {
    factor = factor/10;
    for (double j = ans; j*j<n; j+=factor)
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
  int temp = sqrt(a);
  cout << "square root of "<< a<< " is: "<< more_precision(a, 3 , temp);

  return 0;
}
