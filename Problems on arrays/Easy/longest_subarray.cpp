#include <iostream>
#include <vector>
using namespace std;
 
int longest_subarray(int arr[],int n, int k){
  int idx=0, count=0;
  int sum = 0;
  bool flag=false;
  int temp=0;
  for (int i = 0; i < n; i++)
  {
    if (sum==k||arr[i]==0)
    { 
      flag = true; 

      cout<<"idx = "<<idx<<endl;
      if (count>=idx)
      {
      idx = count;   
      }
      temp = idx;
      count=0;
      sum=0;
    }
    if (sum>k)
    { 
      cout<<"insidee"<<endl;
       if (arr[i]>0)
       {
         flag = true; 
      idx = 0;
      count=0;
      sum=0;
       } 
       idx=temp;
    } 
    
    sum+=arr[i]; 
    count++; 
    cout<<"sum = "<<sum<<endl;
    cout<<"count = "<<count<<endl;
  }
  idx = max(idx, count);   
  cout<<"temp = "<<temp<<endl;  
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
//  int arr[13] =  {0,-16,-19,-12,6,12,-11,-15,-3,-9,6,-19,12}; 
//  int arr[8] =  {1,2,1,2,1}; 


  cout<< longest_subarray(arr,8,17);
  return 0;
}
