#include <iostream>
#include <vector>
using namespace std;
 
// using backtracking 
void print(int i, int n){
  if(i<1) return;
  print(i-1, n);
  cout<<i<<endl;
}

int main()
{
  print(4,4);
  return 0;
}
