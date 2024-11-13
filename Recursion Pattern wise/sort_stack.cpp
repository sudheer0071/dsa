#include <iostream>
#include <vector>
#include<stack>
using namespace std;
 
void reverse(stack <int> &st){
  vector<int>  temp;
  while (!st.empty())
  {
     temp.push_back(st.top());
     st.pop();
  }
  
}

int main()
{
  stack<string> s;
 
}
 