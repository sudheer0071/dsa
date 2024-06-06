#include <iostream>
#include <vector> 
#include<cmath>
using namespace std; 


long long int f( long long int n){
  long long s = 0;
 if (n){   
 n = n*n*n + f(n-1);
 }
 return n;
} 

int main()
{
  int n;
  cin>>n;
  // initialize with 1;
  int a = f(n);
  cout<<a;
  return 0;
}
