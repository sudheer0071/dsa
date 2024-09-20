#include <iostream>
#include <vector>
using namespace std;
 
bool isIsomorphic(string s, string t){
  vector<int> idxS(200,0);
  vector<int> idxT(200,0);
  int len = s.length();
  if(len != t.length()) return false;
  for (int i = 0; i < len; i++)
  {
    if(idxS[s[i]] != idxT[t[i]]) {  
                return false;  
            }
    idxS[s[i]] = i + 1;
    idxT[t[i]] = i + 1; 
  }
  return true;
}

int main()
{
  string s = "egg", t = "add";
  cout<<isIsomorphic(s,t);
  return 0;
}
