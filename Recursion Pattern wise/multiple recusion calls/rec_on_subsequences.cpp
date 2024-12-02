#include <iostream>
#include <vector>
using namespace std;
 
void generate(int i, vector<int>ans, vector<int> arr){
  if(i>=arr.size()) {
    for(auto c : ans){
      cout<<c<<" ";
    }
    cout<<endl;
    return;
  }
  ans.push_back(arr[i]);
  generate(i+1, ans, arr);
  ans.pop_back();
  generate(i+1, ans,  arr);
  // return ans;
}

int main()
{
  vector<int> arr={3,1,2};
  vector<int> ans;
  generate(0,ans, arr);
  return 0;
}
     