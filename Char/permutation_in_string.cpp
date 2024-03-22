#include <iostream>
#include <vector>
using namespace std;
 
bool checkEqual(int a[26], int b[26]){
  for (int i = 0; i < 26; i++)
  {
    if (a[i]!=b[i])
    {
      return 0;
    }
   return 1;   
  }
  
}

bool checkInclusion(string s1, string s2){

  // character count array
  int count[26]={0};
  for (int i = 0; i < s1.length(); i++)
  {
    int index = s2[i]+'a';
    count[index]++;
  }

// traverse s2 string in window of size s1 length and compare

// running for first window
int i=0;
int windowSize = s1.length();
int count2[26]={0};
while (i<windowSize)
{
  int index = s2[i] - 'a';
  count2[index]++;
  i++;
}
  
  if (checkEqual(count, count2))
  {
    return 1;
  }
   
  // traverse window
  while (i<s2.length())
  {
    char newChar = s2[i];
    int index = newChar - 'a';
    count2[index]++;

    char oldChar = s2[i];
    int index2 = oldChar -'a';
    count2[index2];

    i++;

    if (checkEqual(count, count2))
    {
      return 1;
    }
    
  }
  return 0;
} 

int main()
{
  string s1 = "eidbaoef";
  string s2 = "ab";
  bool batao = checkInclusion(s1,s2);
cout<<batao;
  return 0;
}
