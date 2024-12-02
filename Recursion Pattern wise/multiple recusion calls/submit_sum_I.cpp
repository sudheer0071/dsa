#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void submitSum(int i,vector<int>&arr, vector<int>&ans, int   sum){
  if(i == arr.size()){
    ans.push_back(sum);
    return;
  } 
  submitSum(i+1, arr, ans, sum+arr[i]);
  submitSum(i+1, arr, ans, sum);
}

vector<int> subsetSum (vector<int>&arr){
  vector<int> ans;
  submitSum(0,arr,ans,0);
  sort(ans.begin(), ans.end());
  return ans;
}

int main()
{
 vector<int> arr = {3,1,2};
 vector <int> ans = subsetSum(arr);
 for(auto s:ans){
  cout<<s<<" ";
 }
 cout<<endl;
  return 0;
}
