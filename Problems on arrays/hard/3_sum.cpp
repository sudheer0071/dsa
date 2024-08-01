#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Brute Force Approach
// vector<vector<int>> three_sum(int arr[], int n){
//  set<vector<int>> st;
//  for (int i = 0; i < n; i++)
//  {
//   for (int j = i+1; j < n; j++)
//   {
//     for (int k = j+1; k < n; k++)
//     {
//       if (arr[i]+arr[j]+arr[k]==0)
//       {
//          vector<int> temp = {arr[i],arr[j],arr[k]};
//          sort(temp.begin(), temp.end());
//          st.insert(temp);        
//       } 
//     } 
//   } 
//  }
//  vector<vector<int>> ans(st.begin(), st.end());
//  return ans;
// }

// Better Approach - reducing one ineer loop from brute force
// vector<vector<int>> three_sum(int arr[], int n){
//  set<vector<int>> st;
//  for (int i = 0; i < n; i++)
//  {
//   set<int> headSet;
//   for (int j = i+1; j < n; j++)
//   {
//   int third;
//      third = -(arr[i]+arr[j]);
//       if (headSet.find(third)!= headSet.end())
//       { 
//         cout<<"i = "<<i<<", j = "<<j<<endl;
//          vector<int> temp = {arr[i],arr[j],third};
//          sort(temp.begin(), temp.end());
//          st.insert(temp);        
//       } 
//     headSet.insert(arr[j]);
//   } 
//  }
//  vector<vector<int>> ans(st.begin(), st.end());
//  return ans;
// }


// Optimal Approach - 2 Pointer
vector<vector<int>> three_sum(int arr[], int n){
 vector<vector<int>> ans;
 sort(arr, arr + n);
  for (int i = 0; i < n; i++)
 {
  if (i>0 && arr[i]== arr[i-1])
  {
    continue;
  } 
  int j = i+1;
 int k = n-1;
  while (j<k)
  { 
    int sum = arr[i] + arr[j] + arr[k];
    cout<<"j = "<<j<<", k = "<<k<<", sum = "<<sum<<endl;
    if (sum==0)
    {
        vector<int> temp = {arr[i],arr[j],arr[k]};
        ans.push_back(temp);
        j++;
        k--;
        while(j<k && arr[j]==arr[j-1]) j++;
        while(j<k && arr[k]==arr[k+1]) k--;
    } 
    if (sum<0)
    {
      j++;
    }
    if (sum>0)
    { 
      k--;
    }  
  }
  
 } 
 return ans;
}


int main()
{
  int arr[16] = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
  vector<vector<int>> ans= three_sum(arr, 13);
  for(auto it:ans){
    for(auto ele:it){
      cout<<ele<<" ";
    }
    cout<<endl;
  }
  return 0;
}
