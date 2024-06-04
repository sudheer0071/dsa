#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int gcd(int n, int m){
  int a =n; 
  int b =m;
  // int gcd;
  // for (int i = min(n,m); i > 0; i--)
  // {
  //   if (n%i==0 && m%i==0)
  //   {
  //     gcd = i;
  //     break;
  //   }
    
  // }
  // cout<<gcd;

//  better approach
// by using Euclidian Algorithm

while (a>0 && b>0)
{
  if (a>b) a = a%b; 
  else b = b%a; 
}
if (a==0)  cout<<b; 
else  cout<<a; 
} 

int main()
{
  gcd(40,20);
  // cout<<9%12;
  return 0;
} 