#include <iostream>
#include <vector>
using namespace std;
 

// Brute Force Approach - Using Linear Search
// int lower_bound(int arr[], int n, int x){
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i]>=x)
//     {
//       return i;
//     }
//   }
//   return -1;
// }

// Optimal Approach - Using Binear Search
int lower_bound(int arr[], int n, int x){
  int s = 0, e = n-1;
  int ans =-1;
  int lastVal = INT16_MIN;
  while(s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]>=x )
    {  
      e = mid-1;  
    } else if (arr[mid]<x && lastVal<arr[mid])
    { 
    lastVal=arr[mid];
      ans = mid;
      s=mid+1;
    } 
}
  return ans;
}


int main()
{
  // int arr[4] = {1,2,2,3};
  // int arr[5] = {3,5,8,15,19};
  int arr[7] = {1,2,9,10,11,12,19};
  cout<<lower_bound(arr, 7, 15);
  return 0;
}
