#include <iostream>
#include <vector>
using namespace std;

int last_occurence(int arr[], int n, int x){
 int s=0, e=n-1;
  int idx=-1; 
  while (s<=e)
  {
   int mid = s + (e-s)/2; 
    if (arr[mid]==x )
    { 
      idx=mid;
      s = mid+1; 
    }else if(arr[mid]>x) {  
      e = mid-1;
    } else{
      s = mid+1;
    }
  } 
  return idx;
}

int first_occ(int arr[], int n, int x){ 
   int s=0, e=n-1; 
  int first=-1;
  while (s<=e)
  {
   int mid = s + (e-s)/2; 
    if (arr[mid]==x)
    {  
      first=mid;
      e = mid-1; 
    }else if(arr[mid]<x) {  
     s = mid+1;
    } else{ 
      e = mid-1;
    }
  }  
  return first;
}

int main()
{
  // int arr[7] = {3,4,13,13,13,13,40}; 
  int arr[7] = {5,7,7,8,8,10}; 
  cout<<"first = "<< first_occ(arr, 6, 8)<< ", last = "<<last_occurence(arr, 6,8);
  return 0;
}
