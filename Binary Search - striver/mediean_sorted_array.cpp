#include <iostream>
#include <vector>
using namespace std;
 
  // Brute Force Approach - Using Extra space 
// double medium (int arr1[], int arr2[], int n1, int n2){
//   int i = 0,j=0,k=0;
//   int arr[n1+n2] = {0};
//   while (i<n1&& j<n2)
//   {
//     if (arr1[i]<arr2[j])
//     {
//       arr[k] = arr1[i]; 
//       k++; i++;
//     }
//     else if(arr2[j]<arr1[i]){ 
//       arr[k] = arr2[j];
//       k++; j++; 
//     } 
//   } 
//    while(i<n1){
//     arr[k] = arr1[i];i++;k++;
//    }
//    while(j<n2){ 
//     arr[k] = arr2[j];j++;k++;
//    } 
// if ((n1+n2)%2==1) // odd
// {  
//   return (double)arr[(n1+n2)/2];
// }
//   double median = ((double)arr[(n1+n2)/2] + arr[(n1+n2)/2 - 1])/2.0;
//   return median ;
// } 


// Better Approach - without Using Extra space 
// double medium (int arr1[], int arr2[], int n1, int n2){
//  int n = n1+n2;
//  int count = 0, idx2 = n/2, idx1 = idx2 - 1;
//  int idxel1 = -1, idxel2 = -1;
//  int i = 0, j =0;
//  while (i<n1 && j<n2)
//  {
//     if (arr1[i]<arr2[j])
//     {
//       if (count == idx1) idxel1 = arr1[i];
//       if (count == idx2) idxel2 = arr1[i];
//       count++; i++;
//     }
//     else{
//       if (count == idx1) idxel1 = arr2[j];
//       if (count == idx2) idxel2 = arr2[j];
//       count++; j++;
//     }
//  }
//  while (i<n1)
//  {
//       if (count == idx1) idxel1 = arr1[i];
//       if (count == idx2) idxel2 = arr1[i];
//       count++; i++;
//  } 
//  while (j<n2)
//  {
//       if (count == idx1) idxel1 = arr2[j];
//       if (count == idx2) idxel2 = arr2[j];
//       count++; j++; 
//  }
//  if (n%2==1)
//  {
//   cout<<"inside";
//     return (double) idxel2;
//  }
//  return (double) (idxel1+idxel2)/2;
// } 

// Optimal Approach - Using Binary Search and partition pattern
double medium (int arr1[], int arr2[], int n1, int n2){
// if(n1>n2) return medium(arr1,arr2, n1,n2);
  int partion = (n1+n2 + 1)/2;
  int s = 0, e = min(n1,n2);
  while (s<=e)
{
  int mid1 = s +(e - s)/2;
  int mid2 = partion - mid1;
  int l1= INT16_MIN, l2 = INT16_MIN, r1 = INT16_MAX, r2 = INT16_MAX;
  if(mid1<n1) r1 = arr1[mid1];
  if(mid2<n2) r2 = arr2[mid2];
  if(mid1-1>=0) l1 = arr1[mid1-1];
  if(mid2-1>=0) l2 = arr2[mid2-1];

  if (l1<=r2 && l2<=r1)
  {
    if ((n1+n2)%2==1) return max(l1,l2);
    else return ((double) (max(l1,l2)+ min(r1,r2)))/2.0;
  }
  else if(l1>r2) e = mid1-1;
  else s = mid1+1; 
} 
return 0;
}

int main()
{
  
  int arr1[3] = {2,4,6};
  int arr2[3] = {1,3,5};

  // int arr1[3] = {1,3};
  // int arr2[3] = {2};

  // int arr1[3] = {1,2};
  // int arr2[3] = {3,4};

  // int arr1[0] = {};
  // int arr2[3] = {1};

  // int arr1[4] = {2,2,4,4};
  // int arr2[5] = {2,2,2,4,4};
  // int arr1[3] = {2,4,6};
  // int arr2[3] = {1,3};
 

  cout<<medium(arr1,arr2,3,3)<<fixed;

  return 0;
} 
