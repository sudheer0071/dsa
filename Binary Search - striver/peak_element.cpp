#include <iostream>
#include <vector>
using namespace std;


int peak_element(int arr[], int n){
  int s=1, e=n-2; 
  if(arr[0]>arr[1] || n==1) return 0;
  if(arr[n-1]>arr[n-2]) return n-1;
  while (s<=e)
  {
    int mid = s + (e-s)/2;
   if (arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1])
   {
    return mid;
   }
   
    if (arr[mid]>arr[mid-1])    // left sorted
   {   
     s = mid+1;   
   }
   else{ // right sorted 
    cout<<"inside"<<endl;
    e = mid-1; 
   }  
  }  
  return -1;
}

int main()
{
  // int arr[10] = {1,2,3,4,5,6,7,8,5,1};
  // int arr[10] = {1,2,1,3,5,6,4};
  // int arr[10] = {1, 2, 3, 4, 5};
  int arr[10] = {3, 4, 3, 2, 1};
  // int arr[10] = {1};
  // int arr[10] = {-2147483648,-2147483647};
  cout<<peak_element(arr, 5);
  return 0;
}
