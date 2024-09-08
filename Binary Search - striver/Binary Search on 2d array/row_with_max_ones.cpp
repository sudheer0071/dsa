#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach - Linear Search
// int max_ones(int arr[][3], int n, int m){
//   int maxCount = INT8_MIN;
//   int idx = -1;
//   for (int  i = 0; i < m; i++)
//   {
//   int count= 0; 
//     for (int j = 0; j < n; j++)
//     {
//       if (arr[i][j]==1) count ++;
//     }
//     if (count>maxCount)
//     {
//       idx = i;
//     }
//     maxCount = max(count, maxCount);
//   }
//   return idx;
// }

// Optimal  Approach - Binary Search

int lowerBond (int arr[],int n , int x){
    int count= 0; int s = 0, e = n; int ans=n;
    while(s<=e)
    {
      int mid = s + (e-s)/2; 
      if (arr[mid]<1)
      {  
        s = mid + 1;
      }else{
        ans = mid;
        e = mid-1;
      }
    }
    cout<<ans<<endl;
    return ans;
}

int max_ones(int arr[][3], int n, int m){
  int maxCount = 0;
  int idx = -1;
  for (int  i = 0; i < m; i++)
  {
  int count= 0; int s = 0, e = m; int ans=n;
     
    count = ans - lowerBond(arr[i],m,1); 
    if (count>maxCount)
    {
      idx = i;
    }
    maxCount = max(count, maxCount);
  }
  return idx;
}


int main()
{
  int arr[3][3] = {0,1,1,1,1,1,0,0,0};
  cout<<max_ones(arr,3,3);
  return 0;
}
