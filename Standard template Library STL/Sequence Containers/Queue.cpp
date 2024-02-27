#include <iostream>
#include<queue>
using namespace std;
 
int main()
{
  queue<string> q;
  q.push("john");
  q.push("wick");
  q.push("legend");

  cout<<"First element: "<<q.front()<<endl;
  q.size();
  q.pop();
  return 0;
}
