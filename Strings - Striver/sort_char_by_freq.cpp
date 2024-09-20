#include <iostream>
#include <vector>
#include <map> 
#include <queue>
using namespace std;
 
string sortChar(string s){
  map<char, int> bn;
  priority_queue<pair<int , char>> pq;
  
  for (int i = 0; i < s.size(); i++)
  {
    bn[s[i]]++;
  }
  
  
  for (auto it: bn)
  {
    pq.push({it.second, it.first});
  }
string ans = "";
  while (!pq.empty())
  { 
    ans+= string(pq.top().first,pq.top().second);
    pq.pop();
  }
 return ans;

}

int main()
{
  cout<<sortChar("tree");
  return 0;
}

