#include <iostream>
#include <vector>
#include <map>
using namespace std;

// brute force 
// vector<int> twoSum(int arr[],int n, int t){
//   int sum = 0;
//   vector<int> ans;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     { 
//       if (arr[i]+arr[j]==t)
//       { 
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//       } 
//     } 
//   }
//   return {-1,-1};
// } 

// Better Approach - HashMaps
// int twoSum(int arr[],int n, int t){
//    map<int, int> sum;
//    int rem;
//    for (int i = 0; i < n; i++)
//    {  
//     int rem = t - arr[i];
//     if (sum.find(rem) != sum.end())
//     {
//       cout<<"["<<sum[rem]<<", "<<i<<"]";
//       return 1;
//     }
//     sum[arr[i]] = i;
//    }
//    return -1;
// } 


// Optimal Appraoch - Two Pointer
int twoSum(int arr[],int n, int t){
    int l = 0; int r=n-1;
     while (l<r)
     {
      int sum = arr[l]+arr[r];
      if (sum==t)
      {
         cout<<"["<<l<<", "<<r<<"]";
         return 1;
      }
      else if (sum<t)
      {
        l++;
      }else{
        r--;
      }
      
     }
     return -1;
} 


int main()
{
  int arr[5] = {2,6,5,8,11}; 
  // vector<int> ans  = twoSum(arr,5,14);

  // cout<<"["<<ans[0]<<", "<<ans[1]<<"]";
  twoSum(arr,5,144);
  return 0;
}
