#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

vector <int> NGE(vector <int> &nums){
  int n = nums.size();
  vector <int> ans (n, -1);  
  stack <int> st; 
  for (int i = 0; i <  n; i++)
  {  
    while (!st.empty() && st.top() >= nums[i]) st.pop();
     if(st.empty())
    {
      ans[i] = -1;
    } 
    else { 
      ans[i] = st.top();
     }
     st.push(nums[i]);
  }    
  return ans;
}


// in leetcode 
vector <int> NGE2(vector <int> &nums1, vector <int> &nums2){
  int n = nums2.size();
  vector <int> ans;
  map<int, int> mp;
  stack <int> st; 
  for (int i = n -1; i >=0; i--)
  { 
    cout<<"inside"<<nums2[i]<<endl;
    while (!st.empty() && st.top() <= nums2[i]) st.pop();
     if(st.empty())
    {
      mp[nums2[i]] = -1;
    } 
    else { 
      mp[nums2[i]] = st.top();
     }
     st.push(nums2[i]);
  }
  
  for (int i = 0; i < nums1.size(); i++)
  {
     ans.push_back(mp[nums1[i]]);
  }
  
  return ans;
}

int main()
{
  vector <int> a = {4,1,2};
  vector <int> b = {4, 5, 2, 10, 8};

  vector <int> ans  = NGE( b);

  for(auto i:ans){
    cout<<i<<" ";
  }
  return 0;
}
