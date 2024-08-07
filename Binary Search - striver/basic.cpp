#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(int arr[], int n, int k){
  sort(arr, arr+n);
  int e = n-1;
  int s = 0;
 while(s<=e)
  { 
  int mid = s + (e-s)/2;
     if(arr[mid] == k) return mid;
     if (arr[mid]<k)
     {
        s = mid +1;
     }else{
      e = mid -1;
     }
  }
     return -1;  
}


// Reccusive Approach
int binarySearch(int arr[], int s, int e, int k){

  int mid = (s+e)/2; 
  if(s>e) return -1;
  if (arr[mid]<k )
  {
    return  binarySearch(arr, mid+1, e, k);
  }else if (arr[mid]>k)
  {
    return binarySearch(arr, s, mid-1, k);
   /* code */
  }
  else{
   return mid;
  }
  
}

int main()
{
 int arr[5] = {1,3,4,6,7};
 cout<<binarySearch(arr,0,4, 7);
  return 0;
}

