#include <iostream>
#include <vector>
#include <stack>
#include <map>

using namespace std;

vector<int> NGE(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n, -1);
  stack<int> st;

  for (int i = nums.size() - 1; i >= 0; i--)
    st.push(nums[i]);

  for (int i = n - 1; i >= 0; i--)
  {

    cout << " arr:  " << nums[i] << "stack : " << st.top() << endl;
    while (!st.empty() && st.top() <= nums[i])
      st.pop();
    if (st.empty())
    {
      ans[i] = -1;
    }
    else
    {
      ans[i] = st.top();
    }
    st.push(nums[i]);
  }
  return ans;
}

// Another approach - Better than optimal
vector<int> NGE2(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n, -1);
  stack<int> st;

  for (int i = 2 * n - 1; i >= 0; i--)
  {
    while (!st.empty() && st.top() <= nums[i % n]) st.pop();
    if(i<n) ans[i] = st.empty() ? -1 : st.top();
    st.push(nums[i % n]);
  }
  return ans;
}

int main()
{
  vector<int> a = {5, 7, 1, 7, 6, 0};

  vector<int> ans = NGE2(a);

  for (auto i : ans)
  {
    cout << i << " ";
  }
  return 0;
}
