#include <iostream>
#include <vector>
using namespace std;
 
int my_atio(string s){
  int i = 0;
  int sign=1;
  long ans=0;

  while (i<s.size() && s[i]==' ') i++;
  if (s[i]=='-') {
    i++;
    sign = -1;
  }
  else if (s[i]=='+')
  {
    i++;
  } 
  while (i<s.size())
  {
    if (s[i]>='0' && s[i]<='9')
    { 
      ans=ans*10+(s[i]-'0');
    if (ans>INT32_MAX && sign==-1)
    {
       return INT32_MIN;
    } else if (ans>INT32_MAX && sign==1)
    {
       
      return INT32_MAX;
    } 
    i++;
    } else {
      return ans*sign;
    }
  }
  return ans*sign;
} 

int main()
{
  string s = "2312";
  cout<<my_atio(s);
  return 0;
}
