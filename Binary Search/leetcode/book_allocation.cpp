#include <iostream>
#include<numeric>
#include <bits/stdc++.h>
using namespace std;
 
bool is_feasible(int arr[],int n, int k, int res){
    int sum = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
      // cout<<"here"<<endl;
    
      if (sum + arr[i]>res)
      {
         student++;
         sum = arr[i];
      }
      else
      {
        sum+=arr[i];
      }
      
    }
  return student<=k;  
}


int allocate_book(int arr[], int n, int k){ 
    int min = *max_element(arr, arr + n);
    int max = accumulate(arr, arr + n, 0);
    int ans = 0;

    while (min<=max)
    {
    int mid = min + (max-min)/2; 
      if (is_feasible(arr,n, k, mid))
      {
          ans = mid;
          max = mid-1;
      }
      else
      {
        min = mid+1;
      }
      
    }
    
    return ans;
}


int main()
{
  int b[5] = {1,2,2,3,1};
  cout<< allocate_book(b,5,3);
  return 0;
}
