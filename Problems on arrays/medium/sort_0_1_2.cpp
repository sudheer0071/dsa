#include <iostream>
#include <vector>
using namespace std;

void sort_0_1_2(int arr[], int n){
  int l = 0,i=0;
  int r = n-1;
  while (i<=r)
  {
    if (arr[i]==0)
    {
      swap(arr[i],arr[l]);
      l++; 
      i++;
    }
    else if (arr[i] == 2)
    {
      swap(arr[i],arr[r]);
      r--; 
      // i++;
    }  
    else{
      i++;
    };
  } 
}
 
int main()
{
  int arr[6] = {2,0,2,1,1,0};
  // int arr[6] = {2,0,2,1,2,0};
 sort_0_1_2(arr,6);
  for (int i = 0; i <6; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
