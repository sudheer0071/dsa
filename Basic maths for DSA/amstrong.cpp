#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
bool amstrom(int n){
  int sum = 0;
  int temp = n;
  while (n>0)
  {
    sum = sum + pow(n%10,3); 
    n/=10;
  } 
  return (sum==temp);
}

int main()
{
  int d = amstrom(371); 
  return 0;
}
