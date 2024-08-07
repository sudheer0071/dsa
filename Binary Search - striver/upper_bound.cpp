#include <iostream>
#include <vector>
using namespace std;
 

// Brute Force Approach - Using Linear Search
// int upper_bound(int arr[], int n, int x){
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i]>x)
//     {
//       return i;
//     }
//   }
//   return -1;
// }

// Optimal Approach - Using Binear Search
int upper_bound(int arr[], int n, int x){
  int s = 0, e = n-1;
  int ans =n;
  int lastVal = INT16_MIN;
  while(s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]>x )
    {  
      ans = mid;
      e = mid-1;  
    } else  
    { 
    // lastVal=arr[mid];
      s=mid+1;
    } 
}
  return ans;
}


int main()
{
  int arr[5] = {1,2,2,3,6};
  // int arr[5] = {3,5,8,15,19};
  // int arr[7] = {1,2,9,10,11,12,19};
  cout<<upper_bound(arr, 5, 3);
  return 0;
}
