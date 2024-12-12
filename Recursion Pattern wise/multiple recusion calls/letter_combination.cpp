#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, vector<char>> mp;

void fintCombinations(string digits, int i, string cur, vector<string> &ans)
{
  if (i == digits.length() == 1)
  {
    ans.push_back(cur);
    return;
  }

  char dg = digits[i];
  for (auto x : mp[dg - '0'])
  {
    fintCombinations(digits, i + 1, cur + x, ans);
  }
}

vector<string> letterCombinations(string digits)
{
  if (digits.length() == 0)
    return {};
  mp[2] = {'a', 'b', 'c'};
  mp[3] = {'d', 'e', 'f'};
  mp[4] = {'g', 'h', 'i'};
  mp[5] = {'j', 'k', 'l'};
  mp[6] = {'m', 'n', 'o'};
  mp[7] = {'p', 'q', 'r', 's'};
  mp[8] = {'t', 'u', 'v'};
  mp[9] = {'w', 'x', 'y', 'z'};
  vector<string> ans;
  fintCombinations(digits, 0, "", ans);
  return ans;
}

int main()
{
  vector<string> ans = letterCombinations("23");  
  cout<<"{ ";
 for (int i = 0; i < ans.size(); i++)
 {
   cout<<ans[i]<<", ";
 }
  cout<<" }";
 
  return 0;
}
