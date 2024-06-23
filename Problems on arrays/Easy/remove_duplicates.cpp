#include <iostream>
#include <vector>
#include <set>
using namespace std;

// brute force
// int remove_duplicate(int arr[],int n){
//  set<int> set;

//   for (int i = 0; i < n  ; i++)
//   { 
//     set.insert(arr[i]);
//     }
    
//     int k = set.size();

//     int j=0;
//     for(int x:set){ 
//       arr[j++]=x;
//     }
//     return k;
//   } 

// optimal approach
int remove_duplicate(int arr[],int n){
    int j = 0;
  for (int i =1; i < n; i++)
  {
    if (arr[j]!=arr[i])
    {
      j++;
      arr[j] = arr[i];
    }
    
  }
  return j+1;
  
  } 


int main()
{
  int arr[7] = {1,1,2,2,3,4,4};
  int k = remove_duplicate(arr,7);
  for (int i = 0; i < k; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
