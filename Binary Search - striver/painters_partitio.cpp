#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPainters(int arr[], int n , int painters){
  int painter = 1;
  int sumPainters = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (sumPainters+arr[i]<=painters) 
    {
      sumPainters+=arr[i];
    }else{
      painter++;
      sumPainters = arr[i];
    }
  }  
    return painter;
}

// Brute Force - Lineaarly Traversing all possible cases from max(arr[]) to sum(arr[])
// int area_min_time(int arr[], int n , int k){
//   int sum = 0;
//   for (int i = 0; i < n; i++) sum+=arr[i]; 
//   for (int i = *max_element(arr, arr+n); i < sum; i++)
//   {
//     if(countPainters(arr, n, i)==k) return i;
//   }
//   return -1; 
// }

// Optimal Approach - Binary Search
int area_min_time(int arr[], int n , int k){
  int sum = 0;
  for (int i = 0; i < n; i++) sum+=arr[i];
 int s = *max_element(arr, arr+n), e = sum;

  while(s<=e)
  {
    int mid = s + (e-s)/2;
    if(countPainters(arr, n, mid)<=k) e = mid -1;
    else s = mid +1;
  }
  return s; 
}


int main()
{
  // int arr[5] = {5, 5, 5, 5};
  int arr[5] = {10 ,20 ,30 ,40,};
  cout<<area_min_time(arr, 4,2);
  return 0;
}
