#include <iostream>
#include <vector> 
#include<cmath>
using namespace std; 


long long int fact( long long int n){ 
 if (n==0){   
  return 1;
 }  
 return n*fact(n-1); 
} 

int main()
{
  int n;
  cin>>n;
  // initialize with 1;
  int a = fact(n);
  cout<<a;
  return 0;
}
