#include <iostream>
#include <vector>
using namespace std;

int countPrime(int n){
  int count=0;
  for (int i = 2; i <=n; i++)
  {
    cout<<"inside for i: "<<i <<endl; 
    if (n%i==0)
    {
       
    } 
  }
    return count; 
}
 
int main()
{
  cout<<countPrime(10);
  // cout<<7%2;
  return 0;
} 