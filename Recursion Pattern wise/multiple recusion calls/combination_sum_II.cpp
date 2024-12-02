#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void findCombination(int idx, vector<int>& arr, int t, vector<vector<int>>& ans, vector<int>&ds){  
    if(t == 0){
      ans.push_back(ds); 
      return ;
  }
  for (int i = idx; i < arr.size(); i++)
  {  
    if(i > idx && arr[i] == arr[i-1]) continue;
    if(arr[i]>t) break;
    ds.push_back(arr[i]);
    findCombination(i+1,arr ,t - arr[i], ans,ds);
    ds.pop_back();
  } 
}

vector<vector<int>> combinationSum2 (vector<int>& candidates, int t){
  sort(candidates.begin(), candidates.end());
  vector<vector<int>> ans;
  vector<int> ds;
  findCombination(0,candidates,t,ans,ds);
  return ans;
}

int main()
{vector<int> arr={1,1,1,2,2};
  vector <vector<int>> ans =  combinationSum2( arr, 8);
for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  } 
  return 0;
} 