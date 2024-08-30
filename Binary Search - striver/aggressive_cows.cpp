#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canWePlace(int arr[], int n, int dist, int k){
   int count =1; int last = arr[0];
    for (int j = 1; j < n; j++)
    {
      if (arr[j]-last>=dist)
      {
        count++;
        last = arr[j];
      }
      if(count>=k) return true; 
    }
    return  false;
}

// Brute Force Approach - linear search
// int min_max_dist(int arr[], int n, int k){
//   sort(arr, arr+n);
//   int max_d = arr[n-1]- arr[0];
//   for (int i = 1; i < max_d; i++)
//   {
//    if(canWePlace(arr, n, i, k)==false) return i-1;
//   }
//   return max_d;
// }

// Optimal Approach - Binear Search
int min_max_dist(int arr[], int n, int k){
  sort(arr, arr+n);
  int max_d = arr[n-1]- arr[0];
  int s = 1; int e = max_d;
  int ans  = max_d;
  while(s<=e)
  {
    int mid = s + (e-s)/2;
   if(canWePlace(arr, n, mid, k)==false) {

   e = mid -1;
    ans = mid -1;
    }
   else {
    s = mid+1;
   }
  }
  return ans;
}

int main()
{
  // int arr[6] ={0,3,4,7,10,9};
  int arr[6] = {4,2,1,3,6};
  cout<<min_max_dist(arr, 5, 2);
  return 0;
}
