#include <iostream>
#include <vector>
using namespace std;

vector<int> collide(vector<int> &arr)
{
  int n = arr.size();
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]>0) ans.push_back(arr[i]);
    else{
      cout<<"inside"<<endl;
      while(!ans.empty() && ans.back() >0 && ans.back() < abs(arr[i])) ans.pop_back();
      if(!ans.empty() && ans.back() ==  abs(arr[i])) ans.pop_back();
      else if(ans.empty() || ans.back() < 0) ans.push_back(arr[i]);
    }
  } 
  return ans;
}

int main()
{
  // vector<int> a = {10,2,-5};
  // vector<int> a = {5,2,-5};
  // vector<int> a = {5,-5};
  // vector<int> a = {4,7,1,1,2,-3,-7,17,15,-16};
  vector<int> a = {-2,-1,1,2};
  vector<int> ans = collide(a); 
  for (auto i : ans)
  {
    cout << i << " ";
  }

  cout << endl;
  return 0;
}
