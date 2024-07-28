#include <iostream>
#include <vector>
using namespace std;

int countSubarray(int arr[], int n, int k){
  int sum=0, count=0;
  for (int i = 0; i < n; i++)
  {
    sum+=arr[i];
    if (sum==k)
    { 
      cout<<sum<<endl;
      count++;
      sum=0;
      sum+=arr[i];  
    }
    if(arr[i]==sum) {
      count++;
    }
  }
    return count;
}


int main()
{ 
  int arr[5] = {1,2,3};
  cout<<countSubarray(arr, 3, 3);
  return 0;
}
