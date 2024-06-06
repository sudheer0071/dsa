#include <iostream>
#include <vector>
using namespace std;
 int count =0;
void f( int n){
 if (n>0) {
 cout <<"name"<<" ";
//  count++;
 f(n-1);
 cout<< n<<" ";
 };
} 

int main()
{
  int n;
  cin>>n;
  // initialize with 1;
  // f(1,n)
  f(n);
  return 0;
}
