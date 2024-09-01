#include <iostream>
#include <vector>
using namespace std;
 
int rotated_search(int arr[], int n, int k){
  int s = 0, e = n-1;

  while (s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]==k) return mid ;
    if (arr[s]<=arr[mid]) // left sorted
    { 
      if (arr[s] <=k && k<= arr[mid])
      {  
        cout<<arr[mid]<<endl;
      e = mid-1;
      }
      else{
      // cout<<"inside"<<endl;
        s = mid+1;
      }
    } 
    
    else // right sorted 
    { 
         if (arr[mid] <=k &&  k<= arr[n-1])
      {  
        s = mid+1;
      }
      else{
      e = mid-1;
      }
    } 
  }
    return -1; 
} 
 

 int main()
{
 int arr[10] =  {4,5,6,7,0,1,2,3};
//  int arr[10] =  {4,5,6,7,0,1,2};
//  vector<int> arr =  {4,5,6,7,0,1,2};
//  vector<int> arr = {1,3};
//  vector<int> arr = {3,5,1};

//  int arr[10] =  {1};
 cout<<rotated_search(arr,8, 1);
  return 0;
}
 