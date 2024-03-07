#include <iostream>
#include <vector>
using namespace std;

char toLowerCase(char ch){
  if ( ch>='a'&&ch<='z')
  {
    return ch;
  }else{
   char temp = ch - 'A' + 'a';
   return temp;
  }
  
}
 
int main()
{
 cout<<toLowerCase('g');
  return 0;
}
