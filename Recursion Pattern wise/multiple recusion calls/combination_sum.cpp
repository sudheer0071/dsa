#include <iostream>
#include <vector>
using namespace std;
 
void findCombination(int i, vector<int> arr, int t, vector<vector<int>> ans, vector<int>ds){
  if(i>= arr.size()){
    if(t == 0){
      ans.push_back(ds);
    }
    return ;
  }
  if(arr[i]<=t){ 
  ds.push_back(arr[i]);
  findCombination(i, arr, t-arr[i], ans, ds);
  ds.pop_back();
  }
  findCombination(i+1, arr, t, ans, ds);

}

vector<vector<int>> combinationSum (vector<int> candidates, int t){
  vector<vector<int>> ans;
  vector<int> ds;
  findCombination(0,candidates,t,ans,ds);
  return ans;
}

int main()
{vector<int> arr={4,3,6,7};
  vector <vector<int>> ans =  combinationSum( arr, 7);
for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << endl;
  } 
  return 0;
}
