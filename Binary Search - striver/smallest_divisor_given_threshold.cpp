#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

// Brute force Approach - tranversing whole array from 1 to max(arr[])
// int min_divisor(int arr[], int n, int l){
//   int maxx = *max_element(arr, arr+n);
//   for (float i = 1 ; i <= maxx; i++)
//   {
//     int sum = 0;
//     cout <<"i = "<<i<<endl;
//     for (int j = 0; j < n; j++)
//     {
//       sum+=ceil(arr[j]/i);
//       cout<<sum<<endl;
//     }
//     if (sum<=l)
//     {
//       return i;
//     }
//   }
//     return -1;     
// }
 

// Optimal Approach - Binary Search



int min_divisor(int arr[], int n, int l){
  int maxx = *max_element(arr, arr+n);
  int s = 1;
  int e = maxx;
  int ans = -1;
  while(s<=e)
  {
    int sum = 0;
    float mid = s+(e-s)/2;
    cout <<"mid = "<<mid<<endl;
    for (int j = 0; j < n; j++)
    {
      sum+=ceil(arr[j]/mid);
    }
      cout<<sum<<endl;
    if (sum<=l)
    {
      e = mid-1;
      ans = mid;
    }else{
      s = mid+1;
    }
  }  
    return ans;     
}
 

int main()
{
  // int arr[5] =  {1,2,3,4,5};
  // int arr[5] =  {8,4,2,3};
  int arr[5] =  {44,22,33,11,1};
  // int arr[5] =  {1,2,5,9};
  cout<<min_divisor(arr,5,5);
  return 0;
}
