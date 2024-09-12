#include <iostream>
#include <vector>
using namespace std;
 
// Brute force Approach - store the matrix into 1D array ==> sort the array ==> find median 

// Optimal Approach - Binary Search 
int sumOfSmall(int arr[][3],int n, int m, int x){
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int s = 0, e = m-1;int ans = m;
    while (s<=e)
    {
      int mid = s + (e-s)/2;  
      if (arr[i][mid]<=x)
      {

        // ans = mid;
        s = mid+1;
      }else{
        ans = mid;
        e = mid -1;
      }
      
    } 
    sum+=ans;
  }
  return sum;
}

int median(int arr[][3], int n, int m){
  int s = INT8_MAX, e = INT8_MIN;
  for (int i = 0; i < n; i++)
  {
    s = min(s,arr[i][0]);
    e = max(e, arr[i][m-1]); 
  } 
  while (s<=e)
  {
    int mid = s + (e-s)/2;
    int sum_of_small = sumOfSmall(arr,n,m,mid);
    cout<<"sum = "<<sum_of_small<<endl;
    // if (sum_of_small == (m*n)/2) return mid; 
    if (sum_of_small<=(m*n)/2)
    {
      s = mid+1;
    }else{
      e = mid-1;
    }
    
  }
  return s;

}

int main()
{
   int arr[3][3] = {1,4,9,2,5,6,3,8,7};
  cout<<median(arr,3,3);
  return 0;
}
