#include <iostream>
#include <vector>
using namespace std;
 
int fib(int i){
  int sum =0;
 if (i<=1)  return i;
  return fib(i-1) + fib(i-2);
}
// 0,1,1,2,3,5,8
int main()
{ 
  int n=10;
  cout<<fib(n);
  return 0;
}
