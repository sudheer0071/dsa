#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

bool pallindrone(int i, string s){
  if(i>=s.size()) return true; 
  if(s[i] != s[s.size()-i-1]) return false;
  return pallindrone(i+1,s);
}

string preprocess(string s){
  string res = "";
  for(char c : s){
    if(isalnum(c)){
      res += tolower(c);
    }
  }
  return res;
}

int main()
{
  string prestr = preprocess("A man, a plan, a canal: Panama");
  cout<<pallindrone(0,prestr);
  return 0;
}
