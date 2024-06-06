#include <iostream>
#include <vector>
using namespace std;

void reverse(int i,int arr[], int n){ 
  if (i>=n/2) return ;
  swap(arr[i],arr[n-i-1]); 
  reverse(++i,arr,n);
}
 
int main()
{
  int arr[5] = {3,6,2,4,1};
  int l,r;
  reverse(0,arr, 5);
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
