#include <iostream>
#include <vector>
using namespace std;
 
 void left_rotate(int arr[], int n){
  int j = arr[0]; 
  for (int i = 0; i < n; i++)
  {
    if (i==n-1)
    {
      arr[n-1] = j;
    }
    else
    {
      arr[i] = arr[i+1];
    }
    
  }
  
 }

int main()
{
  int arr[1] = {3};
left_rotate(arr,1);
for (int i = 0; i < 1; i++)
{
  cout<<arr[i]<<" ";
}

  return 0;
}
