#include <iostream>
#include <vector>
#include<unordered_set>
#include <algorithm>
using namespace std;

bool ls(int arr[],int n, int k){
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==k)
    {
      return true;
    }
    
  }
  return false;
}

// My Approach 
// int largestConsecutive(int arr[], int n){
//   // sort(arr+n, arr);
//   int maxi = INT16_MIN; 
//   int count=0;
//   for (int i = 0; i < n; i++)
//   {  
//     int prev=INT16_MIN;
//     for (int j = 0; j < n; j++)
//     {
//       int diff = arr[i]-arr[j];
//       if(diff<0) diff = -diff; 
//       if (diff>prev)
//       {
//         prev = diff;
//       }
//     }
//     if (prev>maxi)
//     {
//       cout<<arr[i]<<" ";
//       maxi = prev;
//     cout<<endl;
//     }
//     else{
//       cout<<arr[i]<<" ";
//       count++;
//     }
//   }
//   return count;
// }

// Brute Force Approach
// int largestConsecutive(int arr[], int n){
//   int longest = 0;
//   for (int i = 0; i < n; i++)
//   {
//     int m = arr[i];
//     int count = 1;
//     while (ls(arr, n, m+1))
//     {
//       m++;
//       count++;
//     }
//   longest = max(longest, count)  ;
//   } 
//   return longest;
// }
 
// Better Approach
// int largestConsecutive(int arr[], int n){
//   sort(arr, arr+n);
//   int count=0, lastSum=INT16_MIN, longest=0;
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i]-1==lastSum)
//     {
//       count++;
//       lastSum=arr[i];
//     }
//     else if (arr[i]!=lastSum)
//     {
//       count=1;
//       lastSum = arr[i];
//     }
//     longest = max(longest, count);
    //   }
//   return longest;
// }

// Optimal Approach
int largestConsecutive(int arr[], int n){ 
  int longest=0;
 unordered_set<int> st;
  for (int i = 0; i < n; i++)
  { 
    st.insert(arr[i]);
  }

  for (auto it: st)
  {
    if (st.find(it - 1)==st.end())
    {
      int count = 1;
      int x =it;
      while (st.find(x+1)!=st.end())
      {
        x++;
        count ++;
      }
      longest = max(longest, count);
    }
    
  }
  
  return longest;
}



int main()
{
  // int arr[6] = {13, 8, 5, 7, 6}; 
  int arr[6] = {100,4,200,1,3,2}; 
  // int arr[10] = {0,3,7,2,5,8,4,6,0,1}; 
cout<<endl<<largestConsecutive(arr,6);
  return 0;
}
