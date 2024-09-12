#include <iostream>
#include <vector>
using namespace std;

string remove_paranthesis(string s){
   string res;
   int count =0;
   for (int i = 0; i < s.size(); i++)
   {
    if (s[i]=='(')
    {
      if (count>0)
      {
        res+=s[i];
      } 
      count++;
    }
    else
    {
      count--;
      if (count>0)
      {
        res+=s[i];
      } 
    } 
   }
   return res;
}

int main()
{
  string s = "(()())(())";
  cout<<remove_paranthesis(s);
  return 0;
}
