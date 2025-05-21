#include <iostream>
#include <vector>
#include <stack>


#include <deque>

using namespace std;

vector <int> sliding_window_maximum(vector<int> arr, int k)
{
  stack <pair<int ,int>> st;

  
  deque<int> dq;
  vector<int> ans;
  int n = arr.size();

  for (int i = 0; i < n; i++)
  {
    if (!dq.empty() && dq.front() <= i - k)
    {
      dq.pop_front();
    }
    while (!dq.empty() && arr[dq.back()] <= arr[i])
    {
      dq.pop_back();
    }
    dq.push_back(i);
    if (i >= k - 1)
    {
      ans.push_back(arr[dq.front()]);
    }
  }

  return ans;
}

int main()
{
  vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
  int k = 3;
  vector<int> result = sliding_window_maximum(arr, k);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }    
  cout << endl;
  return 0;
}
  