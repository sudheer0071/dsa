#include <iostream>
#include <vector>
using namespace std;


// Brute force
// int longest_subarray(int a[], int n, int k) {  
//     int len = 0;
//     for (int i = 0; i < n; i++) { // starting index
//         for (int j = i; j < n; j++) { // ending index
//             // add all the elements of
//             // subarray = a[i...j]:
//             int s = 0;
//             for (int K = i; K <= j; K++) {
//                 s += a[K];
//             } 
//             if (s == k)
//                 len = max(len, j - i + 1);
//         }
//     }
//     return len;
// }
 
// My approach 
int longest_subarray(int arr[],int n, int k){
  int idx=0, count=0;
  int sum = 0;
  bool flag=false;
  int temp=0;
  for (int i = 0; i < n; i++)
  {
    sum+=arr[i]; 
    count++; 
    cout<<"sum = "<<sum<<endl;
    cout<<"count = "<<count<<endl; 
    if (sum==k||arr[i]==0)
    { 
    if (arr[i+1]==0)
    {
      count++;
    }
   else{
      flag = true;  
      cout<<"idx = "<<idx<<endl;
      if (count>=idx)
      {
      idx = count;
      }
      // i=i-1;   
      temp = idx;
      count=0;
      sum=0;
   }
    }
    if (sum>k)
    {  
      cout<<"insidee"<<endl;
       if (arr[i]>0)
       {
         flag = true; 
      idx = 0;
      count=0;
      sum=0;
       } 
       idx=temp;
    }  
  }
  idx = max(idx, count);   
  return flag?idx:0;
}
 
// Optimal Approach 1
// int longest_subarray(int arr[], int n, int k){
//   int l=0,r=0;
//   int maxlen=0;
//   int sum = arr[0];
//   while (r<n)
//   {
//     while (sum>k&&l<=r)
//     {
//       sum-=arr[l];
//       l++;
//     }
//     if (sum==k)
//     {
//       maxlen = max(maxlen, r-l+1);
//     }
//     r++;
//     if (r<n){
//       sum+=arr[r];
//     }  
//   }
//   return maxlen;
// }

// Optimal Approach 2
// int longest_subarray(int arr[], int n, int k){
  
// }

int main()
{
  // int arr[5] =  {2,3,5,1,9};
  // int arr[6] =  {1,4,3,3,5,5};
//  int arr[10] =  {-7,-11,-3,-7,4,15,-13,18,-10,-10};
//  int arr[17] =  {-13,0,6,15,16,2,15,-12,17,-16,0,-3,19,-3,2,-9,-6};
//  int arr[17] =  {-1,2,3}; 
//  int arr[8] =  {8,-9,10,-2,-10,6,18,17}; 
//  int arr[13] =  {0,-16,-19,-12,6,12,-11,-15,-3,-9,6,-19,12}; 
//  int arr[8] =  {1,2,1,2,1}; 
//  int arr[10] =  {1,2,3,1,1,1,1,4,2,3}; 
int arr[3] = {-1,1,1};
// int arr[4] = {2,0,0,3};


  cout << longest_subarray(arr,3,1);
  return 0;
}
 