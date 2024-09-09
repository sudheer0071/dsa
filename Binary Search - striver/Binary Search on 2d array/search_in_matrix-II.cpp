#include <iostream>
#include <vector>
using namespace std;

// Brute Force - Linear search

// Better Apparoach - Binary Search
// int search_mat_II(int arr[][4], int n, int m, int t){
//   for (int i = 0; i < n; i++)
//   {
//     cout<<"arr[i][0] = "<<arr[i][0]<<", arr[i][m-1] = "<<arr[i][m-1]<<endl;
//      if(arr[i][0]<=t && t<= arr[i][m-1]){
//     int s = 0,e=m;
//     int ans = -1;
//    while (s<=e)
//    { 
//     int mid = s + (e-s)/2;
//     cout<<"mid = "<<arr[i][mid]<<endl;
//     if (arr[i][mid]==t) return true;
//     if (arr[i][mid]<t)
//     { 
//       s = mid+1;
//     }else{
//       e = mid -1;
//     }
//    }
//   } 
//   }
//   return false;
// }

// Optimal Approach - Eliminating row or column based on the target element
int search_mat_II(int arr[][4], int n, int m, int t){
  int row = n-1, col = 0;
  while(row>=0 && col<m)
  {
    if (arr[row][col]==t) return true;
    else if(arr[row][col]>t)  row--;
    else col++;
  }
  return false;
}


int main()
{
   int arr[4][4] = {1,4,7,11,2,5,8,12,3,6,9,16,10,13,14,17};
  cout<<search_mat_II(arr,4,4,3);
  return 0;
}
