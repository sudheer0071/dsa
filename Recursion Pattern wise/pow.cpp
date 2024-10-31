#include <iostream>
#include <vector>
using namespace std;

// double pow( double x, int n){
//   double ans = 1.0;
//   long long nn = n;
//   if(nn<0) nn = -1*nn;
//   while (nn)
//   {
//     if(nn%2){
//       ans = ans * x;
//       nn = nn-1;
//     }else {
//       x = x * x;
//       nn = nn/2;
//     }
//   }
//   if (n<0) ans = (double)(1.0) / (double)(ans);
//   return ans; 
// } 

// By Recursive Approach

double powRec(double x, int n){
  if(n==0) return 1.0;
  if(n%2){
    return x * powRec(x*x,(n-1)/2);
  } else{
    return  powRec(x*x,n/2);
  }
}
double pow(double x, long long n){
  if (n<0)
  {
    x = 1/x;
    n = -n;
  }
  return powRec(x,n);
}

int main()
{
  cout<<pow(2,10);
  return 0;
}
