#include <iostream>
#include <vector>
using namespace std;
 
void selection_sort(int arr[], int n){
  for (int i = 0; i < n-1; i++)
  {
    int min = i;
    // cout<<min<<endl;
    for (int j = i+1; j < n; j++)
    {
       if (arr[j]<arr[i])
       {
        // cout<<"inside"<<endl;
         min = j;
       } 
    } 
    swap(arr[min],arr[i]);
    // cout<<arr[i]<<' ';
  }
}

int main()
{ 
  int arr[6] =  {13,46,24,52,20,9};
  selection_sort(arr,6);
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
