#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int prime(int n){ 
  int count = 0;
  // for (int i = 1; i <= n; i++)
  // {
  //   // cout<<n%i<<endl;
  //   if (n%i==0)
  //   {  
  //     count++;
  //   } 
  // } 
  //  if (count==2)
  //  {
  //   cout<<"prime";
  //  }else{
  //   cout<<"not prime";
  //  }

  // better approach 
  // RUNNING LOOP TO ROOT OF N
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
    cout<<"prime";
   }else{
    cout<<"not prime";
   }
   
} 

int main()
{
  prime(50);
  return 0;
} 