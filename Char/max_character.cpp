#include <iostream>
#include <vector>
using namespace std;
 
char getMaxOccuring(string s ){
  int arr[26]={0};

  // create array of cout of characters

  for (int i = 0; i < s.length(); i++)
  { 
    int num = 0;
    char ch = s[i]; 
      num = ch-'a'; 
    arr[num]++;

  }
  
  // find maximum occ of character
int maxi = -1, ans =0;
for (int i = 0; i < 26; i++)
{
  if (maxi<arr[i])
  { 
    ans = i;
    maxi=arr[i];
  }
}
  char finalAns = 'a'+ans;
 return finalAns;

}

int main()
{
string s= "dadadadda";
cout<<getMaxOccuring(s);
  return 0;
}
