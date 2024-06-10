#include <iostream>
#include <vector>
using namespace std;

bool checkPalindrone(int i, string& s, int n){ 
  if (i>n/2) return true;
  
    if (s[i]!=s[n-i-1])
    {  
      return false;
    }
    return checkPalindrone(++i, s, n);
}


int main()
{
  string s = "madam";
  
  cout<<checkPalindrone(0, s, 5);
  return 0;
}
