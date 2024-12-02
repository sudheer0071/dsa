#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void submitSum2(int idx,vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds ){
 
    ans.push_back(ds);
  
  for (int i = idx; i < arr.size(); i++)
  {
    if(i!=idx && arr[i]==arr[i-1]) continue;
    ds.push_back(arr[i]);
    submitSum2(i+1, arr, ans, ds);
    ds.pop_back();
  }
  
}

vector<vector<int>> subsetSum (vector<int>&arr){
  vector<vector<int>> ans;
  vector<int> ds;
  sort(arr.begin(), arr.end());
  submitSum2(0,arr,ans,ds);
  return ans;
}

int main()
{
 vector<int> arr = {4,4,4,1,4};
vector<vector <int>> ans = subsetSum(arr);
 for(auto s:ans){
  cout<<" { ";
  for(auto c:s){
    cout<<c<<" ";
  }
  cout<<" } ";
 }
 cout<<endl;
  return 0;
}
