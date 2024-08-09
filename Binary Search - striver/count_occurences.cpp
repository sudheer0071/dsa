#include <iostream>
#include <vector>
using namespace std;
 
// Brute force - usiing Linear Search

// Optimal Approach - Binary Search

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

	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    if(last_occurence(arr, n, x)==-1|| first_occ(arr, n,x)==-1) return 0;
	   return last_occurence(arr, n, x) - first_occ(arr, n,x) + 1;
	    // code here
	}

int main()
{
  int arr[7] = {5,7,7,8,8,10}; 
  cout<<count(arr, 7,8);
  return 0;
}
