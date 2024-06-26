#include <iostream>
#include <vector> 
using namespace std;
 
// //  brute force approach
//  void left_rotate(int arr[], int n,int k){ 
//   k+k%n;
//   int temp[n];
// //   // store in temporary
// //   for (int i = 0; i <k; i++)
// //   {
// //     temp[i] = arr[i];
// //   }

// // //  arr[] from i = k to last index (for first elements till k)
// //   for (int  i = k; i < n; i++)
// //   {
// //     arr[i-k] = arr[i];
// //   }
  
// //   // adding first first elements of arr[] form temp [] (from i=k to last index)
// //   for (int i = n-k; i < n; i++)
// //   {
// //     arr[i] = temp[i-(n-k)];
// //   }
   

// // more optimal brute force

// for (int i = 0; i < n; i++)
// {
//   temp[(i+k)%n] = arr[i];
// }
// for (int i = 0; i < n; i++)
// {
//   arr[i] = temp[i];
// }


// } 

// reversal approach

void reverse(int arr[], int s , int e){
  while (s<=e)
  {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
  
}

void left_rotate(int arr[], int n, int k){
  reverse(arr, 0, k);
  reverse(arr, k+1, n-1);
  reverse(arr, 0, n-1);
}

int main()
{
  int arr[7] = {1,2,3,4,5,6,7};
left_rotate(arr,7,3);
// cout<<3%4;
for(int i = 0; i < 7; i++)
{
  cout<<arr[i]<<" ";
} 
  return 0;
}
