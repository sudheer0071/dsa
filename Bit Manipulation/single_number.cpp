#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Brute Force Approach - using hashmap
// int singleNumber( vector<int>&arr) {
//   int ans = 0;
//   map<int, int> mp;
//   for (int i = 0; i < arr.size(); i++)
//   {
//     mp[ arr[i]]++;
//   }
//   for (int i = 0; i < arr.size(); i++)
//   {
//     if(mp [arr[i]]==1){
//       ans = arr[i];
//     }
//   }
//   return ans; 
// }

// Brute Force Approach - using hashmap
int singleNumber( vector<int>&arr) {
  int ans = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    ans^=arr[i];
  }
  
  return ans; 
}



int main()
{
  vector<int> arr = {4,1,2,1,2};
  cout<<singleNumber(arr);
  return 0;
}
