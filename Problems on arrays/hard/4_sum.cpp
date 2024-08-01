#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
 
// Brute Force Approach
// vector<vector<int>> four_sum(int arr[], int n, int t){
//  set<vector<int>> st;
//  for (int i = 0; i < n; i++)
//  {
//   for (int j = i+1; j < n; j++)
//   {
//     for (int k = j+1; k < n; k++)
//     {
//       for (int l = k+1; l < n; l++)
//       { 
//       if (arr[i]+arr[j]+arr[k]+arr[l]==t)
//       {
//          vector<int> temp = {arr[i],arr[j],arr[k], arr[l]};
//          sort(temp.begin(), temp.end());
//          st.insert(temp);        
//       } 
//       } 
//     } 
//   } 
//  }
//  vector<vector<int>> ans(st.begin(), st.end());
//  return ans;
// }

// Better Approach - reducing one inner loop from brute force
// vector<vector<int>> four_sum(int arr[], int n, int t){
//  set<vector<int>> st;
//  for (int i = 0; i < n; i++)
//  {
//   for (int j = i+1; j < n; j++)
//   {
//     set<int> hashSet;
//     for (int k = j+1; k < n; k++)
//     {
//        int fourth = t -(arr[i]+arr[j]+arr[k]);
//       if (hashSet.find(fourth)!= hashSet.end())
//       {
//          vector<int> temp = {arr[i],arr[j],arr[k], fourth};
//          sort(temp.begin(), temp.end());
//          st.insert(temp);        
//       } 
//        hashSet.insert(arr[k]);
//     } 
//   } 
//  }
//  vector<vector<int>> ans(st.begin(), st.end());
//  return ans;
// }

// Optimal Approach - Two Pointer
vector<vector<int>> four_sum(int arr[], int n, int t){
 vector<vector<int>> ans;
 sort(arr, arr+n);
 for (int i = 0; i < n; i++)
 {
    if (i>0 && arr[i]==arr[i-1])
    {
      continue;
    }
  for (int j = i+1; j < n; j++)
  {
    if (j>i+1 && arr[j]==arr[j-1])
    {
      continue;
    }
    int k = j+1;
    int l = n-1;
    while (k<l)
    {
       long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l]; 
      if (sum<t)
      {
        k++;
      }
      else if (sum>t)
      {
        l--;
      }else if(sum==t){
        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
        ans.push_back(temp);
        k++;
        l--;
        while(k<l && arr[k]==arr[k-1]) k++;
        while(k<l && arr[l]==arr[l+1]) l--;
      }
      
    }
    
  } 
 } 
 return ans;
}


int main()
{
    // int arr[16] = {1,0,-1,0,-2,2};
    int arr[16] = {4,3,3,4,4,2,1,2,1,1};
  vector<vector<int>> ans= four_sum(arr, 10,9);
  for(auto it:ans){
    for(auto ele:it){
      cout<<ele<<" ";
    }
    cout<<endl;
  }
  return 0; 
}
