
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int three_char_substring( string s ){
  int maxLen = 0;
  for (int i = 0; i < s.size(); i++)
  {
    for (int j = i+2; j < s.size(); j++)
    {
      if(i>i) break;

      maxLen++;
    }
    
  }
  return maxLen;
}
 

// Optimal Approach
int three_char_substring2( string s ){
  int maxLen = 0;
  vector<int> lastSeen = {-1,-1,-1};
  for (int i = 0; i < s.size(); i++)
  {
       lastSeen[s[i]-'a'] = i;
       if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1){
       int minIndex = min(lastSeen[0] , lastSeen[1]);
       minIndex = min(minIndex , lastSeen[2]);
       maxLen  = maxLen + (1+ minIndex);
       }
                 
    
  }
  return maxLen;
}
 



int main()
{
 string s = "bbacba";
  cout<<three_char_substring2(s);
  return 0;
}
