#include <iostream>
#include <vector>
using namespace std;
 
void reverse(string &name)
{
  int s = 0;
  int e = name.size() - 1;
  while (s <= e)
  {
    swap(name[s++], name[e--]);
  }
}


string reverse_word(string s){
  string word ="";
  string temp ="";
  int i = 0;
  while (i<=s.size())
  { 
    // creating a string;
    word = word + s[i]; 
    if (s[i]==' ')
    {
      //  string word = temp;
      reverse(word);
     temp = temp+word; 
    i++;
  }
  return temp; 
}
}
int main()
{
  string s = "my name is json";
  string new_s = reverse_word(s);
  cout<<new_s;
  return 0;
}
