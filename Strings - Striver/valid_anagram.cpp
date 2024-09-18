#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_set>
using namespace std;

// Approach 1 - sort both string and check if they are same or not.
// bool isAnagram (string s, string t){
//   unordered_set<char> store;
//   if(s.length()!= t.length()) return false; 
//   sort(s.begin(), s.end());
//   sort(t.begin(), t.end()); 
//  for (int i = 0; i < s.length(); i++)
//  {
//     if(s[i]!=t[i]) return false;
//  } 
//   return true; 
// } 


// Approach 2 - count the number of characters in each string;
bool isAnagram (string s, string t){
 
 int freq[26] = {0};
  if(s.length()!= t.length()) return false; 
 
  
 for (int i = 0; i < s.length(); i++)
 {
  freq[s[i] - 'a']++;
 }
 for (int i = 0; i < t.length(); i++)
 {
  freq[t[i] - 'a']--;
 }

 
  for (int i = 0; i < 26; i++)
  {
    if(freq[i] != 0) return false;
  }
  
return true;

} 



int main()
{
  // string s = "rat";
  // string t = "car";
  string s = "anagram";
  string t = "nagaram";
  cout<<isAnagram(s,t);
  return 0;
}
