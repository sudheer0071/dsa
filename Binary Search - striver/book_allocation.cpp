#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countStudent(int arr[],int n, int pages){
  int student = 1;
  int pagesStudent = arr[0];
    cout<<"pages = "<<pages<<endl;
  for (int i = 1; i < n; i++)
  {
    if (pagesStudent+arr[i]<=pages) pagesStudent+=arr[i];
    else {
      student++;
      pagesStudent = arr[i];
    }
  }
  cout<<"student = "<<student<<endl;;
  return student;
}

// Brute Force Approach - Taking all the possible values by Linear Search
// int allocate_book(int arr[], int n, int m){
//   int sum=0;
//   if(m>n) return -1;
//   for (int i = 0; i < n; i++) sum+=arr[i]; 
//   for (int i = *max_element(arr, arr+n); i < sum; i++)
//   {
//     if (countStudent(arr, n, i)<=m)
//     {
//       // ans = max(ans,i);
//       return i;
//     } 
//   } 
//   return -1; 
// }

// Optimal Approach - Taking all the possible values by Linear Search
int allocate_book(int arr[], int n, int m){
  int sum=0;
  if(m>n) return -1;
  for (int i = 0; i < n; i++) sum+=arr[i];
  
  int s = *max_element(arr, arr+n);
  int e = sum;
 
  while(s<=e)
  {
    int mid = s + (e-s)/2; 
    if (countStudent(arr, n, mid)<=m)
    { 
      e= mid-1;
    } 
    else{
      s = mid+1;
    }
  }   
  return s; 
}


int main()
{  
  // int arr[5] = {10,20,30,40};
  // int arr[5] = {12, 34, 67, 90};
  // int arr[5] = {25, 46, 28, 49, 24};
  int arr[5] = {25, 46, 28, 49, 24};
  cout<<allocate_book(arr, 5,4);
  return 0;
}
