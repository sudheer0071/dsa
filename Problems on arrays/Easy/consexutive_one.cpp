#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
 
int cosecutive_one(int arr[],  int n){
int count = 0;
int maxi = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==0)
    {
      count = 0;  
    }  
    else{ 
      count++; 
    }
    maxi = max(maxi,count);
  }
  return maxi;
} 

int main()
{
  int arr[4] = {1, 1, 0, 1};
  cout<<cosecutive_one(arr,  4);
  return 0;
}
