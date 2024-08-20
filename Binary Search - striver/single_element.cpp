#include <iostream>
#include <vector>
using namespace std;

int single_element(int arr[], int n){
  int s = 1, e = n-1;
  if(n==1) return arr[0];
  while (s<=e)
  {  
    int mid = s + (e-s)/2;
    if(arr[0]!=arr[1] || n==1)
    {
     return arr[0];
    }
    if(arr[n-1]!=arr[n-2]) return arr[n-1];

    if (arr[mid]!=arr[mid-1]&& arr[mid]!= arr[mid+1] )
    {
      return arr[mid];
    }
    else if(mid %2==0 && arr[mid]==arr[mid+1] || mid %2==1 && arr[mid]==arr[mid-1]){
      s = mid+1;
    } 
    else{
      e = mid-1;
    }
    
  }
  return -1;
}

int main()
{

  // int  arr[11] = {1,1,2,2,3,3,4,5,5,6,6};
  int  arr[11] = {1};
  cout<<single_element(arr, 1);
  return 0;
}
 