#include <iostream>
#include <vector>
using namespace std;

void reverse(string &name)
{
  int s = 0;
  int e = name.size() - 1;
  while (s <= e)
  {
    cout<<name[s]<<endl;
    cout<<name[e]<<endl;
    swap(name[s], name[e]);
    s++; e--;
  }
 
}

int getLen(char name[])
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}

int main()
{
  char name[20];
  // cout << "Enter your name: ";
  // cin >> name;
  // cout << "Your name is: " << name << endl;
  // int len = getLen(name);
  // cout << len << endl;
  // cout << name; 
  string neww = "word";
  reverse(neww);
  cout<<neww;
  return 0;
}
