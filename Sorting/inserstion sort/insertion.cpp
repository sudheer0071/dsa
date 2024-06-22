#include <iostream>
#include <vector>
using namespace std;
 
// void insertion_sort(int arr[], int n){
//   for (int i = 0; i < n; i++)
//   {
//     int j = i;
//     while (j>0 && arr[j-1]>arr[j])
//     {
//     swap(arr[j-1],arr[j]);
//     j--;
//     cout<<"runs";
//     }
    
//     // cout<<arr[i]<<' ';
//   }
// }
 

//  recursive approach 
void insertion_sort(int i,int arr[], int n){ 
  if(i==n) return;
  int j=i;
  while (j>0 && arr[j]<arr[j-1])
  { 
    swap(arr[j],arr[j-1]); 
    j--;  
  }
  insertion_sort(i+1,arr,n);
}

int main()
{ 
  int arr[6] =  {13,46,24,52,20,9};
  // int arr[6] =  {1,2,3,4,5,6};
  insertion_sort(0,arr,6);
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
