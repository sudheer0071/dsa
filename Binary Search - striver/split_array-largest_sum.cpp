#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int largest_sum(int arr[], int n, int sum){
  int sub_arr = 1;
  int sum_sub_aarr = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (sum_sub_aarr+arr[i]<=sum)  {
    sum_sub_aarr+=arr[i];  
    }
    else{
      sub_arr++;
      sum_sub_aarr = arr[i]; 
    } 
  } 
 return sub_arr; 
}

int split_array(int arr[], int n, int k){
  int sum = 0;
  for (int i = 0; i < n; i++) sum+=arr[i];
  
  for (int i = *max_element(arr, arr+n); i < sum; i++)
  { 
    if (largest_sum(arr,n, i)<=k)
    {
      return i;
    } 
  }
  return -1;

}

int main()
{
  int arr[6] = {1,2,3,4,5};
  cout<<split_array(arr, 5,3);
  return 0;
}
