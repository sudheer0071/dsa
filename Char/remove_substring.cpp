#include <iostream>
#include <vector>
using namespace std;
 
string rsdfsfsing(string s, string part){ 
   while (s.length()!=0 && s.find(part)<s.length())
   {
      s.erase(s.find(part), part.length());
   }
   return s;
}

int main()
{
 string s = "dabcbaabcbc";
 string part = "abc";
cout<< rsdfsfsing(s,part);
  return 0;
}
