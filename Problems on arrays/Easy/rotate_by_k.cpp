#include <iostream>
#include <vector>
using namespace std;
 
 void left_rotate(int arr[], int n,int k){
  int temp[n];
  if (n%2!=0)
  {
    k=k+1;
  }
  // cout<<"k = "<<k;
  for (int i = 0; i <n/2; i++)
  {   
    temp[k+i-1] = arr[i];
    // cout<<"temp"<<"["<<k+i<<"]: "<<temp[k+i]<<" ";
    temp[i] = arr[k+i]; 
  }
arr=temp;
  for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}
 }

int main()
{
  int arr[7] = {1,2,3,4,5,6,7};
left_rotate(arr,7,3);
// for (int i = 0; i < 6; i++)
// {
//   cout<<arr[i]<<" ";
// }

  return 0;
}
