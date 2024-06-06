#include <iostream>
#include <vector>
using namespace std; 

void f(int i,int n){
 if (i>n) return;
 f(i+1,n);
 cout <<i<<" "; 
} 

int main()
{
  int n;
  cin>>n;
  // initialize with 1;
  f(1,n);
  return 0;
}