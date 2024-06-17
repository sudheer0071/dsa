#include <iostream>
#include <vector>
using namespace std;
 
void insertion_sort(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j>0 && arr[j-1]>arr[j])
    {
    swap(arr[j-1],arr[j]);
    j--;
    cout<<"runs";
    }
    
    // cout<<arr[i]<<' ';
  }
}

int main()
{ 
  // int arr[6] =  {13,46,24,52,20,9};
  int arr[6] =  {1,2,3,4,5,6};
  insertion_sort(arr,6);
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
