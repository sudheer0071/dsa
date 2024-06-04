#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int gcd(int n, int m){
  int gcd;
  for (int i = 1; i < max(m,n); i++)
  {
    if (n%i==0 && m%i==0)
    {
      gcd = i;
    }
    
  }
  cout<<gcd;

//  better approach
// by using Euclidian Algorithm



} 

int main()
{
  gcd(11,13);
  return 0;
} 