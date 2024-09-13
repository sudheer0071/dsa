#include <iostream>
#include <vector>
using namespace std;
 
string largest_odd_num(string s){
  int i = s.length()-1;
  while (i >=0 && ((s[i] - '0') &1)==0)
  {
    i--;
  }
  return s.substr(0,i+1);
}

int main()
{
  string s = "33432";
  cout<<largest_odd_num(s);
  return 0;
}
