#include <iostream>
#include <vector>
#include <map>
# include <string>
using namespace std;

int roman_to_int(string s) {
   map<char, int> m;
    m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int ans=0;
        for (int i = 0; i < s.length(); i++)
        {
          if(m[s[i]]<m[s[i+1]]){
            ans-=(m[s[i]]);
            cout<<ans<<endl;
          }else{
            cout<<"inside"<<endl;
            ans+=m[s[i]];
            cout<<"ans in else "<<ans<<endl;
          }
        }
        
   return ans;
}

int main()
{
  string s = "MCMXCIV";  
  cout<<roman_to_int(s);
  return 0;
}
