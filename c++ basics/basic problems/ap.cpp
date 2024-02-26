#include <iostream>
using namespace std;
 
int main()
{
  int a,b;
  cin >>a>>b;
  
  int bits = a&1;
  int shift = a>>1;
  int opr = shift>>1;
  cout << bits <<endl;
  cout << shift<<endl;
  cout << opr<<endl;
}
