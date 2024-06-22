#include <iostream>
#include <vector>
using namespace std;

void quick_sort(int arr[], int low, int high){
  int pivot = arr[low];
  int j=high;
  int i=low;
if (low<high)
{ 
 while (i<j)
 {
   while (arr[i]<=pivot && i<=high-1 )
   {
     i++;
   }
   while (arr[j]>pivot && j>= low+1)
   {
    j--;
   }

   if (i<j)
   {
    swap(arr[i],arr[j]);
   }
 }
 swap(arr[low], arr[j]);
 for (int i = 0; i < 8; i++)
 {
  cout<<arr[i]<<" ";
 }
  cout<<endl;
 
 int partition = j;
 quick_sort(arr, low, partition-1);
 quick_sort(arr, partition+1, high);
}

}

 

int main()
{
  int arr[8] = {4,6,2,5,7,9,1,3};
  quick_sort(arr, 0, 7);
  for (int i = 0; i < 8; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
