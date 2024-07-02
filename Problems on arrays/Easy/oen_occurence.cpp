#include <iostream>
#include <vector> 
#include <algorithm>
#include <map>
// #include <bits/stdc++.h>
using namespace std;


// Brute force Approach = using Linear Search
// complexity = O(n^2)

 
// Better Approach =  using hash 
// int one_occurence(int arr[], int n){
//   int N = *max_element(arr, arr+n) +1;  
//   int hash[N] = {0};
//   for (int i = 0; i < n; i++)
//   { 
//     hash[arr[i]]++;
//   }
//  for (int i = 0; i < N; i++)
//  { 
//   if (hash[i]==1) return i;
//   //  cout<<"i = "<<i<<" : "<<hash[i]<<endl;
//  } 
// return -1;
// }

// Better Approach =  using Maps, slightly better than hash 
int one_occurence(int arr[], int n){ 
   map<int, int> map; 
  for (int i = 0; i < n; i++)
  { 
    map[arr[i]]++; // time complexity here is O(N*logN)
  }
 for (auto it:map)
 { 
  if (it.second==1) return it.first;
  //  cout<<"i = "<<i<<" : "<<hash[i]<<endl;
 } 
return -1;
}

// Optimal Approach = using XOR
// int one_occurence(int arr[],  int n){
//     int xr = 0;
//     for (int i = 0; i < n; i++)
//     {
//       xr = xr^arr[i];
//     }
//     return xr;
// }

int main()
{
   int arr[5] = {4, 1, 2, 1, 2};
   cout<<one_occurence(arr,5);
  return 0;
}
