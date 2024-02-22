#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
   int s = 0, e = n -1;
   int mid = s + (e-s)/2;
   while (s<e)    
   {

    if (arr[mid] >= arr[0])
    {
      s = mid+1;
    }
    else
    {
       e=mid;
    }
    mid = s + (e-s)/2;

   }
   
   return s;
}

int binarySearch(int arr[],int s, int e, int k){
  int mid = s + (e-s)/2;

  while (s<=e)
  {
    if (arr[mid] == k)
    {
      return mid;
    }
    else if (k<arr[mid])
    {
      e = mid -1;
    }
    else
    {
      s = mid+1;
    }
    mid = (s+e)/2;
    
  }
  return -1;
}

int search(int arr[], int n, int k)
{
     int pivot = getPivot(arr, n);
     if(k >= arr[pivot] && k<=arr[n-1]){
         return binarySearch(arr, pivot, n-1, k);
     }
     else{
         return binarySearch(arr, 0, pivot-1, k);
     }
     return -1;
}

int main()
{
  // int a[6] = {2,4,6,9,14,20};
  // int b[5] = {0,10,8,5,3};
  int b[5] = {7,8,10,1,2};

  // int ind = binaraSearch(a,6, 4);
  int ind = search(b, 5, 2);
  cout<< "Pivot element is at index :" << ind<< endl; 
  return 0;
}
