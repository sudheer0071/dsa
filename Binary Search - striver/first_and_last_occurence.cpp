#include <iostream>
#include <vector>
using namespace std;

int lower_bound(int arr[], int n, int x){
  int s = 0, e = n-1;
  int ans =-1;
  int lastVal = INT16_MIN;
  while(s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]>=x )
    {  
      e = mid-1;  
    } else if (arr[mid]<x  )
    { 
    // lastVal=arr[mid];
      ans = mid;
      s=mid+1;
    } 
}
  return ans;
}

int upper_bound(int arr[], int n, int x){
  int s = 0, e = n-1;
  int ans =n;
  int lastVal = INT16_MIN;
  while(s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]>x )
    {  
      ans = mid;
      e = mid-1;  
    } else  
    { 
    // lastVal=arr[mid];
      s=mid+1;
    } 
}
  return ans;
}

pair<int, int>first_last_occ(int arr[], int n, int t){
  int first = lower_bound(arr, n, t), last = upper_bound(arr, n, t); 
  if (arr[first+1] != t || first ==t)
  {
    return {-1,-1};
  }
  

  return {first+1, last-1};
}

int main()
{
    int arr[7] = {3,4,13,13,13,20,40};
  pair<int, int>ans = first_last_occ(arr, 7,4);
  cout<<"first = "<< ans.first<< ", last = "<<ans.second;
  return 0;
}
