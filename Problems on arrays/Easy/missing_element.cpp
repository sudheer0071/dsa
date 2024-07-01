#include <iostream>
#include <vector>  
#include <algorithm>
using namespace std;
 
// Brute force - not really 
// int missing(int arr[], int n){
//   sort(arr,arr+n); 
  
//   for (int i = 0; i <n-1; i++)
//   {
//     if (arr[i+1]!=arr[i]+1)  return arr[i]+1; 
    
//   }
//    return -1;
// }

// by using hash
// int missing (int arr[], int n){
//   int hash[n+1] = {0};
//   for (int i = 0; i < n-1; i++)
//   {
//     hash[arr[i]]++;
//   }

//   for (int i = 1; i < n; i++)
//   {
//     if (hash[i]==0) 
//     {
//       return i;
//     } 
//   } 
// }

// summation Approach
// int missing(int arr[], int n){
//   int s1 = n*(n+1)/2;  
//   int s2 = 0;
//   for (int  i = 0; i < n-1; i++)
//   {
//     s2+=arr[i];
//   } 
//   return s1-s2;
// }

// XOR Approach - best one
int missing(int arr[], int n){
  int XOR1 = 0, XOR2=0; 
  for (int i = 0; i < n-1; i++)
  {
    XOR2 = XOR2^arr[i];
    XOR1 = XOR1^(i+1);
  }
  XOR1 = XOR1 ^ n;
  return XOR1^XOR2;
  
}

int main()
{
  int arr[4] =   {1,2,4,5};
  cout<<missing(arr, 5);
  return 0;
}
