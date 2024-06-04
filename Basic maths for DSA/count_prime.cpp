#include <iostream>
#include <vector> 
using namespace std;
 
 bool isPrime(int n){
int count = 0;
  for (int i = 1; i*i <= n; i++)
  {
    // cout<<n%i<<endl;
    if (n%i==0)
    {  
      count++;
      if (n/i!=i)
      {
        count++;
      }
      
    } 
  } 
   if (count==2)
   {
    return true;
   }else{
    return false;
   }
} 

int countPrime(int n){
  int count=0;
  int prime;
  int non-prime;

  for (int i = 2; i <=n; i++)
  { 
    if ()
    {
      /* code */
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