#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach - Merge and sort;
// int kth_element(vector<int>& arr1, vector<int>& arr2, int k) {
//   int n = arr1.size();
//   int m = arr2.size();
//   vector <int> arr;
//   int i=0,j=0, l=0;
//   while (i<n && j<m)
//   {
//      if (arr1[i]<arr2[j])
//      {
//        arr.push_back(arr1[i++]);
//      }
//      else  {
//       arr.push_back(arr2[j++]); 
//      }
//   } 
//   while (i<n) arr.push_back(arr1[i++]);
//   while (j<m) arr.push_back(arr2[j++]); 
//  return arr[k-1]; 
// }


// Better Approach - withouth using extra space;
// int kth_element(vector<int>& arr1, vector<int>& arr2, int k) {
//   int n = arr1.size();
//   int m = arr2.size();
//   int count = 0; 
//   int idxel=-1;
//   int i=0,j=0;
//   while (i<n && j<m)
//   {
//      if (arr1[i]<arr2[j])
//      {
//       if(count == k-1) idxel = arr1[i]; 
//        count++; i++;
//      }
//      else  { 
//       if(count == k-1) idxel = arr2[j]; 
//        count++; j++;
//      }
//   } 
//   while (i<n) {
//        if(count == k-1) idxel = arr1[i]; 
//        count++;i++;
//   }  
//   while (j<m) {
//  if(count == k-1) idxel = arr2[j]; 
//        count++; j++;
//   }
// return idxel;
// }

// Optimal Approach - Binary Search
int kth_element(vector<int>& arr1, vector<int>& arr2, int k) {
  int n = arr1.size();
  int m = arr2.size();
  
  if(n>m) return kth_element(arr2,arr1,k); 

  int s = max(0, k-m), e = min(k,n);
  
  while (s<=e)
  {
    int mid1 = s + (e-s)/2;
    cout<<mid1 <<endl;
    int mid2 = k-mid1;
    cout<<mid2 <<endl;

    int l1 = INT8_MIN, l2= INT8_MIN, r1 = INT8_MAX, r2 = INT8_MAX;
    
    if(mid1-1>=0) l1 = arr1[mid1-1];
    if(mid2-1>=0) l2 = arr2[mid2-1];
    if(mid1<n) r1 = arr1[mid1];
    if(mid2<m) r2 = arr2[mid2];  
    if (l1<=r2 && l2<=r1)
    {
      return max(l1,l2);
    }
    else if (l1>r2)
    {
      e = mid1-1;
    } else{
      s = mid1+1;
    }
    
  }
    return 0;
  
}

int main()
{
  // vector<int> arr1= {2,3,6,7,9};
  // vector<int> arr2 = {1,4,8,10};
  vector<int> arr1= {76,94,100};
  vector<int> arr2 = {5, 5, 9, 11, 31, 36, 68, 71, 75, 100 };
  cout<< kth_element(arr1,arr2,12); 
  return 0;
}
