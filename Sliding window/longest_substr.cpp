#include <iostream>
#include <vector>
using namespace std;

int maxLen(string s)
{
  vector < int > mpp(256, -1);

  int left = 0, right = 0;
  int n = s.size();
  int len = 0;
  while (right < n) {
    if (mpp[s[right]] != -1)
      left = max(mpp[s[right]] + 1, left);

    mpp[s[right]] = right;

    len = max(len, right - left + 1);
    right++;
  }
  return len;
}

int main()
{
  string s = "abcabcbb";
  cout << "The length of the longest substring without repeating characters is: " << maxLen(s) << endl;
  return 0;
}
