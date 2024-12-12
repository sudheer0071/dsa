#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void combinationSum3(int idx, int n, int k, vector<vector<int>>&ans, vector<int>&ds ){
 if(ds.size()==k){
  if(n==0){
    ans.push_back(ds);
  }
  return;
 }
  
  for (int i = idx; i < 10; i++)
  {  
    ds.push_back(i);
    combinationSum3(i+1,n-i,k,ans,ds);
    ds.pop_back();
  } 
}

vector<vector<int>> subsetSum (int k, int n){
  vector<int> ds; 
  vector<vector<int>> ans;
  combinationSum3(1,n,k,ans,ds);
  return ans;
}

int main()
{ 
vector<vector <int>> ans = subsetSum(3,9);
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
