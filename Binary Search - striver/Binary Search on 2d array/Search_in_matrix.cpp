#include <iostream>
#include <vector>
using namespace std;

// Brute Force - Linear search

// Better Apparoach - Binary Search
// int search_mat(int arr[][4], int n, int m, int t){
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

// Optimal Approach - More optimized Binary search
int search_mat(int arr[][4], int n, int m, int t){
 
    // cout<<"arr[i][0] = "<<arr[i][0]<<", arr[i][m-1] = "<<arr[i][m-1]<<endl;
    //  if(arr[i][0]<=t && t<= arr[i][m-1]){
    int s = 0,e=m+n-1;
    int ans = -1;
   while (s<=e)
   {
    // cout<<"inside"<<endl;
    int mid = s + (e-s)/2;
    cout<<"mid = "<<arr[mid/n][mid%n]<<endl;
    // cout<<"mid - "<<mid<<endl;
    if (arr[mid/n][mid%n]==t) return true;
    if (arr[mid/n][mid%n]<t)
    { 
      s = mid+1;
    }else{
      e = mid -1;
    }
  //  }
  }  
  return false;
}


int main()
{
   int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  cout<<search_mat(arr,3,4,3);
  return 0;
}
