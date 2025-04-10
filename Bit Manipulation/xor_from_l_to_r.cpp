#include <iostream>
#include <vector>
using namespace std;

int Xorr(int n){
  if(n%4==1) return 1;
  else if (n%4 == 2) return 3;
  else if (n%4 == 3) return 0;
  else  return n;
}

int findXor(int l, int r){
  return Xorr(l-1) ^ Xorr(r);
}

int main()
{
  cout<<findXor(4,8   );
  return 0;
}
