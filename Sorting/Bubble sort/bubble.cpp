#include <iostream>
#include <vector>
using namespace std;
 
// void buttble_sort(int arr[], int n){
//   int swaps = 0;
//   for (int j = 0; j < n; j++)
//   { 
//   for (int i = 0; i < n-j; i++)
//   { 
//      if (arr[i]>arr[i+1])
//      {  
//       swaps++;
//       swap(arr[i],arr[i+1]);
//      } 
//   }
//   if (!swaps)
//   {  
//     break;
//   }
  
//   }
  
// }

// reccursive approach
void buttble_sort( int arr[], int n){ 

  if(!n) return;

    int swaps = 0;
  for (int j = 0; j < n; j++)
  {
  if (arr[j]>arr[j+1])
  {
    swaps=1; 
    swap(arr[j],arr[j+1]);
  } 
  } 
 if(!swaps) return; 
  
    buttble_sort(arr, n-1);
  
}


int main()
{ 
  // int arr[6] =  {13,46,24,52,20,9};
  int arr[6] =  {1,2,3,4,5,6};
  buttble_sort(arr,6);
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
