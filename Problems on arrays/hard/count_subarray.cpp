#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Brute Force Approach - iterating for every possbile subset so T.C = O(n^3)

// Better Approach - reducing one inner loop from brute force approach
// int count_xorSubarray(int arr[], int n, int k){
//   int count = 0; 
//   for (int i = 0; i < n; i++)
//   {
//     int res = arr[i];
//       if(arr[i]==k) {
//         count++; 
//       }
//     for (int j = i+1; j < n; j++)
//     {
//       res = res ^ arr[j];
//       if (res==k)
//       {
//         count ++; 
//       }  
//     } 
//   }
//   return count;
// }

// Optimal Approach  - storing prexing xor in map
int count_xorSubarray(int arr[], int n, int k){
  map<int, int> maps;
  maps[0]=1;
 
  int xorr = 0;
  int count = 0; 
  for (int i = 0; i < n; i++)
  { 
      xorr = xorr ^ arr[i];
      maps[xorr]++; 
      int x = xorr^k;
      if (maps.find(x)!=maps.end())   
      { 
        count+=maps[x];
      } 
    }   
  return count;
}

int main()
{
  int arr[5] = {5, 6, 7, 8, 9};
  cout<<count_xorSubarray(arr, 5, 5);
  // int a = 4^6;
  // cout<<a;  
  return 0;
}
