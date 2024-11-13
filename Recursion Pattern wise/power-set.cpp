#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<string> powerSet(string s)
{
  int n = s.length();
  vector<string> ans;
  for (int i = 0; i < (1 << n); i++)
  {
    string subStr = "";
    for (int j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {
        subStr += s[j];
      }
    }
    cout << subStr << endl;
    if (subStr.length() > 0)
    {
      ans.push_back(subStr);
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

int main()
{
  string s = "abc";
  vector<string> ans = powerSet(s);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << s[i] << " ";
  }

  return 0;
}
