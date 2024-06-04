#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int all_divsors(int n){
  // for (int i = 1; i <= n; i++)
  // {
  //   // cout<<n%i<<endl;
  //   if (n%i==0)
  //   {
  //     cout<<i<<endl;
  //   }
    
  // }
  
  // better approach
  // RUNNING LOOP TO ROOT OF N

    vector <int> ls;
  for (int i = 1; i*i <= n; i++)
  {
    // cout<<n%i<<endl;
    if (n%i==0)
    {
      ls.push_back(i); 
      if ((n/i)!=i)
      { 
     ls.push_back(n/i);      
      }
      
    }
    
  }
   sort(ls.begin(),ls.end());
   for(auto it: ls) cout<<it<<" ";
   
} 

int main()
{
  all_divsors(12);
  return 0;
} 