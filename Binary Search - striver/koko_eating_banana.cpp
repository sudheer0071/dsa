#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


// Brute force Approach - checking for all cases
// int minimum_banana(int arr[], int n, int h)
// {
//   int k;
//   int max_ele = *max_element(arr, arr + n);
//   for (float j = 1; j <= max_ele; j++)
//   {
//   int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//       int hrs = ceil(arr[i] / j);
//       sum += hrs;
//       cout << arr[i] << "/" << j << " = " << hrs << endl;
//       k = j;
//     }
//     cout<<"--------------- sum = "<<sum<<"--------------------"<<endl;
//     if (sum == h)
//     { 
//       return k;
//     }
//   } 
//   return -1;
// }

// Optimal Approach - Binary Search
int minimum_banana(int arr[], int n, int h)
{
  int k;
  int max_ele = *max_element(arr, arr + n);
  int s = 1;
  int e = max_ele; 
 cout<<e<<endl;
  while (s<=e)
  {
    
  int  mid = s + (e-s)/2;
  
  int sum = 0;
    for (int i = 0; i < n; i++)
    {

      int hrs = ceil((double)(arr[i]) / (double)(mid));
      sum += hrs;
      cout << arr[i] << "/" << mid << " = " << hrs << endl;
      k = mid;
    }
    cout<<"--------------- sum = "<<sum<<"--------------------"<<endl;
    // if (sum==h)
    // {
    //   return mid;
    // }
    if (sum >h)
    { 
      s = mid+1; 
    }
    else{ 
      e = mid-1;
    }
    
  } 
  return s;
}


int main()
{
  // int arr[4] = {7, 15, 6, 3};
  // int arr[5] = {25, 12, 8, 14, 19};
  // int arr[5] = {3,6,7,11};
  // int arr[5] = {312884470}; 
  int arr[5] = {805306368, 805306368, 805306368};

  cout << minimum_banana(arr, 3, 1000000000);
  return 0;
}
