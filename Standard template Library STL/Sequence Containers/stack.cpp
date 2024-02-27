#include <iostream>
#include<stack>
using namespace std;
 
int main()
{
  stack<string> s;
  s.push("john");
  s.push("wick");
  s.push("legend");
  cout<<"Top Element: "<<s.top()<<endl;
   s.size();
   s.pop();
  return 0;
}
