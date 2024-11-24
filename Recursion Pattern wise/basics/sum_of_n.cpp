#include <iostream>
#include <vector>
using namespace std;
 
void sum(int i, int summ){
  if(i<1){
    cout<<summ<<endl;
    return ;
  }
  sum(i-1,summ+i);
}

int main()
{
  sum(3,0);
  return 0;
}
