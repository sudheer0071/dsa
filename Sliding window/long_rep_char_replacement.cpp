#include <iostream>
#include <vector>
#include <map>

using namespace std;

int max_char_count( string s, int k){
 int l = 0, r=0, maxLen=0, maxf=0;
 map<char, int> hashd ; 
 while (r<s.size())
 {
    hashd[s[r] - 'A']++;
    maxf = max(maxf, hashd[s[r] - 'A']);

    if((r-l + 1) - maxf > k){
      hashd[s[l]-'A']--; maxf=0;
      l++;
    }

    if((r-l + 1) - maxf <= k){
      maxLen= max(maxLen, r-l+1);
    }
    r++;
 }
 return maxLen;
}

int main()
{
  string s = "ABAB";
  cout << max_char_count(s, 2) << endl;
  return 0;
}
