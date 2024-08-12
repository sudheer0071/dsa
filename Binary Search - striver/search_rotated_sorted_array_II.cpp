#include <iostream>
#include <vector>
using namespace std;
 
int rotated_search(int arr[], int n, int k){
  int s = 0, e = n-1;

  while (s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]==k) return true ;

    if (arr[s]==arr[mid] && arr[mid]== arr[e])
    {
      s = s+1;
      e = e -1;
      continue;
    }
    

    if (arr[s]<=arr[mid]) // left sorted
    {  
      if (arr[s] <=k && k<= arr[mid])
      {  
        cout<<arr[mid]<<endl;
      e = mid-1;
      }
      else{ 
        s = mid+1;
      }
    } 
    
    else // right sorted 
    { 
      cout<<"inside right"<<endl;;
         if (arr[mid] <=k &&  k<= arr[e])
      {  
        s = mid+1;
      }
      else{
      e = mid-1;
      }
    } 
  }
    return false; 
} 
 

 int main()
{
//  int arr[10] =  {7, 8, 1, 2, 3, 3, 3, 4, 5, 6}; 
 int arr[10] =  {1,0,1,1,1};  
 
 cout<<rotated_search(arr,5, 0);
  return 0;
}
 