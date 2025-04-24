#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

string remove_digits(string str, int k){
  stack<char> st;
  string res = "";
  for (int i = 0; i < str.size(); i++)
  {
     while (!st.empty() && k>0 &&  (st.top()- '0') > (str[i]-'0'))
     {
       st.pop();
       k--;
     }
    st.push(str[i]);
  }
  
  while (k>0)
  {
    st.pop();
    k--;
  }
  
  if(st.empty()) return "0";

  while (!st.empty())
  {
    res+=st.top();
    st.pop();
  }
  
  while (res.size() !=0 && res.back() =='0') res.pop_back();

  reverse(res.begin(), res.end());

  if(res.empty()) return "0"; 
  return res;
  
}

int main()
{
  // string s = "1432219";
  // string s = "10200";
  // string s = "10";
  // string s = "112";
  // string s = "10001";
  string s = "33526221184202197273";
  cout<<remove_digits(s, 19);

  return 0;
}
