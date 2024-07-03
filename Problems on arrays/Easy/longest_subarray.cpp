#include <iostream>
#include <vector>
using namespace std;
 
int longest_subarray(int arr[],int n, int k){
  int idx, count=0;
  int sum = 0;
  bool flag=false;
  for (int i = 0; i < n; i++)
  {
    if (sum>=k||arr[i]==0)
    {
      flag = true;
      idx = count;
      count=0;
      sum=0;
    }
    sum+=arr[i];
    cout<<"sum = "<<sum<<endl;
    count++;
  }
  idx = max(idx, count);   
  return flag?idx:0;
}

int main()
{
  // int arr[5] =  {2,3,5,1,9};
  // int arr[6] =  {1,4,3,3,5,5};
//  int arr[10] =  {-7,-11,-3,-7,4,15,-13,18,-10,-10};
//  int arr[17] =  {-13,0,6,15,16,2,15,-12,17,-16,0,-3,19,-3,2,-9,-6};
//  int arr[17] =  {-1,2,3}; 
 int arr[8] =  {8,-9,10,-2,-10,6,18,17}; 

  cout<< longest_subarray(arr,8,17);
  return 0;
}
