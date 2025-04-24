#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> NSE(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n);
  stack<int> st;
  for (int i = n - 1; i >= 0; i--)
  {
    while (!st.empty() && nums[st.top()] >= nums[i])
      st.pop();
    ans[i] = st.empty() ? n : st.top();
    st.push(i);
  }
  return ans;
}

vector<int> PSEE(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n);
  stack<int> st;
  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && nums[st.top()] > nums[i])
      st.pop();
    ans[i] = st.empty() ? -1 : st.top();
    st.push(i);
  }
  return ans;
}

vector<int> NGE(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n);
  stack<int> st;
  for (int i = n - 1; i >= 0; i--)
  {
    while (!st.empty() && nums[st.top()] <= nums[i])
      st.pop();
    ans[i] = st.empty() ? n : st.top();
    st.push(i);
  }
  return ans;
}

vector<int> PGEE(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n);
  stack<int> st;
  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && nums[st.top()] < nums[i])
      st.pop();
    ans[i] = st.empty() ? -1 : st.top();
    st.push(i);
  }
  return ans;
}



int sumMin(vector<int> &arr)
{ 
  vector<int> nse = NSE(arr);
  for (auto i : nse)
    cout << i << " ";
  cout << endl;
  vector<int> psee = PSEE(arr);
  for (auto i : psee)
    cout << i << " ";
  cout << endl;
  int total = 0;
  int mod = int(1e9 + 7);

  for (int i = 0; i < arr.size(); i++)
  {
    int l = i - psee[i];
    int r = nse[i] - i;
    total = (total + (l * r * 1LL * arr[i]) % mod) % mod;
  }
  return total;
}


int sumMax(vector<int> &arr)
{ 
  vector<int> nse = NGE(arr); 
  vector<int> psee = PGEE(arr); 
  int total = 0;
  int mod = int(1e9 + 7);

  for (int i = 0; i < arr.size(); i++)
  {
    int l = i - psee[i];
    int r = nse[i] - i;
    total = (total + (l * r * 1LL * arr[i]) % mod) % mod;
  }
  return total;
}

int sum(vector<int> &arr){
  return sumMax(arr) - sumMin(arr);
}


int main()
{
  vector<int> a = {3, 1, 2, 4};
  cout << sum(a);
  return 0;
}
