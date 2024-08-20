#include <iostream>
#include <vector>
using namespace std;
 
int num_rotated(int arr[], int n){
  int s=0, e = n-1;
  int idx = -1;
  int prev = 0;
  while (s<=e)
  {
    int mid = s + (e-s)/2;
    if (arr[s]<=arr[mid])
    {
      if (prev<arr[mid])
      {
        prev = arr[mid];
        idx = mid;
      }
       s = mid+1;
    }
    else {
      e = mid-1;
    }
    prev = max(prev, mid);
  }
  return idx==n-1 || idx < 0?0: idx+1;
}

int main()
{ 
  // int arr[8] = {4,5,6,7,8,29,2,3};
  // int arr[8] = {4,5,6,7,0,1,2,3};
  // int arr[8] = {3,4,5,1,2};
  int arr[8] = {8,10,21,31,43,45};
  // int arr[8] = {11,13,15,17};
  // int arr[8] = {-1};
  cout<<num_rotated(arr, 6);
  return 0;
}
