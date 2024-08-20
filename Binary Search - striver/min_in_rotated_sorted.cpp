#include <iostream>
#include <vector>
using namespace std;


int minimun(int arr[], int n){
  int s=0, e=n-1;
  int prev=0;
  int idx =-1;
  
  int minn= INT16_MAX;
  while (s<=e)
  {
   int mid = s + (e-s)/2;
   if (arr[s]<=arr[mid])    // left sorted
   {  
    cout<<"mid = "<<arr[mid]<<", prev = "<<prev<<endl; 
    if (arr[mid]>prev)
    {
      prev= arr[mid]; 
      idx = mid;
  cout<<"idx = "<<idx<<endl;
    }  
     s = mid+1;  

   }
   else{ // right sorted 
    e = mid-1; 
   }  
  }  
  return idx==n-1||idx<0? arr[0]: arr[idx+1];
}

int main()
{
  // int arr[8] = {4,5,6,7,0,1,2,3};
  // int arr[8] = {3,4,5,1,2};
  // int arr[8] = {11,13,15,17};
  int arr[8] = {-1};
  cout<<minimun(arr, 1);
  return 0;
}
