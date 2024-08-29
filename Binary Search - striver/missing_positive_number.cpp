#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach - Linear Search
// int missing_positive_num(int arr[], int n, int k){
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i]<=k) k++;
//     else break;
//   }
//   return k;
// }


// Optimal Approach - Binary Search
int missing_positive_num(int arr[], int n, int k){
  int s = 0, e = n-1;
  int ans = -1;
  while(s<=e)
  {
    int mid = s + (e-s)/2;
    int missing = arr[mid] - (mid+1);
    if (missing<k) 
    {
      s = mid+1;
      ans = mid;
    }
    else e = mid -1;
  }
  return k+e+1;
}

int main()
{
  int arr[5] ={4,7,9,10};
  cout<< missing_positive_num(arr, 4,4);
  return 0;
}
