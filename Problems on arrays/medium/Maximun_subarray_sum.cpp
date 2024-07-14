 
#include <iostream>
#include <vector>
#include <map>  
// #include <bits/stdc++.h>
using namespace std;

// Brute force Approach 
// int maximum_subarray_sum(int arr[], int n){
//   int maxi = INT32_MIN;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i; j < n; j++)
//     {
//   int sum = 0;
//       for (int k = i; k <=j; k++)
//       {
//         sum+=arr[k];
//       }
//         maxi = max(sum, maxi); 
//     } 
//   }
//   return maxi;
// }
 
// Better Approach - Reducing one loop in Brute force approach
// int maximum_subarray_sum(int arr[], int n){
//   int maxi = INT32_MIN;
//   for (int i = 0; i < n; i++)
//   {
//   int sum = 0;
//     for (int j = i; j < n; j++)
//     {
//      sum+=arr[j];
//   maxi = max(sum, maxi);
//   }
// }
//   return maxi;
// }

// Optimal Approach - Using Kadane's Algorightm
// int maximum_subarray_sum(int arr[], int n){
//   int maxi = INT32_MIN;
//   int sum = 0; 
//   for (int i = 0; i < n; i++)
//   {
//     sum+=arr[i];
//     maxi = max(sum, maxi);
//     if(maxi==sum){
//       cout<<arr[i]<<" ";
//     }
//     if(sum<0) sum=0;
// }
//   return maxi;
// }

// Follow up question - Printing the subarray
long long maximum_subarray_sum(int arr[], int n){
  long long maxi = INT32_MIN;
  long long sum = 0; 
  int s = -1, e=-1;
  int start;
  for (int i = 0; i < n; i++)
  {
    if(sum==0) start=i;
    sum+=arr[i];
    if(sum>maxi){
      maxi = sum;

      s = start;
      e = i;
    } 
    if(sum<0) sum=0;
}
cout<<"[";
for (int i = s; i < e; i++)
{
  cout<<arr[i]<<", ";
}
cout<<"]";

  return maxi;
} 

int main()
{
//  int arr[7] = {2,2,1,1,1,2,2};
//  int arr[3] = {3,2,3};
//  int arr[10] = {-2,1,-3,4,-1,2,1,-5,4};
 int arr[10] = {-2,-3,4,-1,-2,1,5,-3};
 cout<<endl<<maximum_subarray_sum(arr,10); 
  return 0;
}
 