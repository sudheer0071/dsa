#include <iostream>
#include <vector>
using namespace std;
 int count =0;
void f(){
  if (count==345) return; 
  cout<<count<<endl;
  count++;
  f();
  
  // stack overflow will happen
}

int main()
{f();
  return 0;
}
