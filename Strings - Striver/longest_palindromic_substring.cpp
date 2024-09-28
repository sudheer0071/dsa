#include <iostream>
#include <vector>
using namespace std;

string long_palindrone(string s){
  int i = 0;
  int j = s.size() - 1;
  int maxLen = INT8_MIN;
  string ans = "";
  while (i<=j)    
  {
    if (s[i]==s[j])
    {
      int len = j-i+1;
      cout << len<<endl;
      cout<<"s[i] = "<<s[i]<<", s[j] = "<< s[j]<<endl;
      if(i!=j) {                
      ans = ans + s.substr(i, len);
      } 
      cout<<"ans = "<<ans<<endl;
    }   else{
      cout<<"here";
      ans = "";
    }
      i++;j--;  
    
  }
  return s.size()==1?s:ans;
}

int main()
{
  // cout<<long_palindrone("babad");
  // cout<<long_palindrone("cbbd");
  // cout<<long_palindrone("asdgfgsda");
  cout<<long_palindrone("ac");
  return 0;
}
