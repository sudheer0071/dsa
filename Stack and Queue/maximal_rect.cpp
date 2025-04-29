#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int largest_area(vector<int> arr)
{
  stack<int> st;
  int n = arr.size();
  int maxArea = 0;

  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && arr[st.top()] > arr[i])
    {
      int nse = i;
      int ele = st.top();
      st.pop();
      int pse = st.empty() ? -1 : st.top();
      maxArea = max(maxArea, arr[ele] * (nse - pse - 1));
    }
    st.push(i);
  }

  while (!st.empty())
  {
    int nse = n;
    int ele = st.top();
    st.pop();
    int pse = st.empty() ? -1 : st.top();
    maxArea = max(maxArea, arr[ele] * (nse - pse - 1));
  }

  return maxArea;
}

int maximal_rect(vector<vector<int>> mat)
{
  int n = mat.size();
  int m = mat[1].size();

  int maxArea = 0;
  vector<vector<int>> pSum(n, vector<int>(m, 0));
  for (int j = 0; j < m; j++)
  {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += mat[i][j];
      if (mat[i][j] == 0)
      {
        sum = 0;
      }
      pSum[i][j] = sum;
    }
  }
  for (int i = 0; i < n; i++)
  {
    maxArea = max(maxArea, largest_area(pSum[i]));
  }

  return maxArea;
}

int main()
{
  vector<vector<int>> a = {{1, 0, 1, 0, 0},
                           {1, 0, 1, 1, 1},
                           {1, 1, 1, 1, 1},
                           {1, 0, 0, 1, 0}};
  cout << maximal_rect(a);
  return 0;
}
