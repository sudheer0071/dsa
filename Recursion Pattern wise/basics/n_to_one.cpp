#include <iostream>
#include <vector>
using namespace std;

void print(int i, int n){
  if(i<1) return;
  cout<<i<<endl;
  print(i-1,n);
} 

int main()
{
  print(4,4);
  return 0;
}
