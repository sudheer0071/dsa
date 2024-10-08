#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
// Brute force - using sets/maps

// int unionn(int arr1[], int arr2[], int n , int m){
//     set<int> st;
//     for (int i = 0; i < n; i++)
//     {
//       st.insert(arr1[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//       st.insert(arr2[i]);
//     }
//     int j=0;
//     int union_[st.size()];
//     for(int x:st){
//       union_[j++]=x;
//     }
//    for (int i = 0; i < st.size(); i++)
//    {
//     cout<<union_[i]<<" ";
//    } 
// }

// Optimal Approach Two Pointer Approach
int unionn(int arr1[], int arr2[], int n , int m){
  int i=0;
  int j=0;
  vector<int> uinonn;
  while (i<n&&j<m)
  {
    if (arr1[i]<=arr2[j])
    {
       if (uinonn.size()==0||uinonn.back()!=arr1[i])
       {
        uinonn.push_back(arr1[i]);
       }
        i++;
       
    }
        // cout<<"inside";
    
    if (arr2[j]<=arr1[i])
    {
       if (uinonn.size()==0||uinonn.back()!=arr2[j])
       {
         uinonn.push_back(arr2[j]);
       }
        j++;
       
    }
      
  }
  
  while (j<m)
  {
     if (uinonn.size()==0||uinonn.back()!=arr2[j])
       {
        uinonn.push_back(arr2[j]);
       }
        j++;
  }
  while (i<n)
  {
     if (uinonn.size()==0||uinonn.back()!=arr1[i])
       {
        uinonn.push_back(arr1[i]);
       }
        i++;
  }
  

  for (int i = 0; i < uinonn.size(); i++)
  {
    cout<<uinonn[i]<<" ";
  } 
}


int main()
{
  int arr1[5] = {1,2,3,4,5};
  int arr2[5] = {2,3,4,5,6};
  unionn(arr1,arr2, 5, 5);
  return 0;
}
