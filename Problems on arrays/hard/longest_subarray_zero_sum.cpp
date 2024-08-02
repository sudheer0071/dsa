#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Brute Force Approach
// int zeroSum(int arr[], int n){
//   int len = 0;
//   int maxi = INT16_MIN;
//   for (int i = 0; i < n; i++)
//   {
//     int sum = arr[i];
//       if (arr[i]==0) len=1;
//     for (int j = i+1; j < n; j++)
//     {
//       sum+=arr[j];
//       if (sum==0)
//       {
//       cout<<sum<<endl;
//         len = j-i+1;
//         cout<<"len = "<<len<<endl;
//       } 
//     } 
//   maxi = max(maxi, len);
//   }
//   return maxi;
// } 

// Optimal Approach
int zeroSum(int arr[], int n){
  int len = 0;
  map<int, int> maps;
  int maxi = INT16_MIN;
  int sum=0;
  for(int i = 0;i<n;i++) {
        sum += arr[i]; 
        if(sum == 0) {
            maxi = i + 1; 
        }
        else {
            if(maps.find(sum) != maps.end()) {
                maxi = max(maxi, i - maps[sum]); 
            }
            else {
                maps[sum] = i; 
            }
        }   
    }

 
  return maxi;
} 


int main()
{
  int arr[6] = {9, -3, 3, -1, 6, -5};
  // int arr[8] = {6, -2, 2, -8, 1, 7, 4, -10};
  // int arr[8] = {15,-2,2,-8,1,7,10,23};
  // int arr[8] = {0};
  // int arr[8] = {1, 0, -5};
  // int arr[8] = {1, 3, -5, 6, -2};
  cout<<zeroSum(arr, 5);
  return 0;
}
