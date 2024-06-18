#include <iostream>
#include <vector>
using namespace std;
 
void sort(vector<int> &arr ,int low, int mid, int high){
   vector<int> temp;
   int left = low, right = mid+1;

   while (left <=mid && right <=high)
   {
    if (arr[left]<=arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }else
    {
      temp.push_back(arr[right]);
      right++; 
    }
   }

    while (left<=mid)
    { 
      temp.push_back(arr[left]);
      left++; 
    }
     
    while (right<=high)
    { 
      temp.push_back(arr[right]);
      right++; 
    }
    
   for (int i = low; i <=high; i++)
   {
     arr[i]  = temp[i-low];
   }
   
}  

void merge_sort(vector<int> &arr , int low , int high){
  if (low>=high) return ;
  int mid = (low + high)/2;
  
  merge_sort(arr, low, mid);
  merge_sort(arr, mid+1, high);
  sort(arr,low, mid, high);
}


int main()
{ 
  // vector<int> arr =  {13,46,24,52,20,9};
   vector<int> arr =  {1,2,3,4,5,6};
  merge_sort(arr, 0,5);
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
