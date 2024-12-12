#include <iostream>
#include <vector>
using namespace std;

bool isPladindrone(string s, int start, int end){
  while (start<=end)
  {
    if(s[start++] != s[end--]){
      return false;
    }
  }
  return true;
}

void partition(string s, int idx, vector<string> &ds, vector<vector<string>>&ans){
  if(idx == s.size()){{
    ans.push_back(ds);
    return ;
  }}

for (int i = idx; i < s.size(); i++)
{
   if(isPladindrone(s,idx,i)){
     ds.push_back(s.substr(idx, i - idx+1));
     partition(s,i+1,ds,ans);
     ds.pop_back();
   }
}

}

vector<vector<string>> palindronePartition(string s){
  vector<vector<string>> ans;
  vector<string> ds;
  partition(s,0,ds,ans); 
  return ans;
}


int main()
{
  vector<vector<string>> ans = palindronePartition("aabb");
 cout << " [ ";
  for (auto i: ans) {
    cout << "[ ";
    for (auto j: i) {
      cout << j << " ";
    }
    cout << "] ";
  }
  cout << "]";

  
  return 0;
}
