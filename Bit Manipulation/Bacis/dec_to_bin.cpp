#include <iostream>
#include <vector>
using namespace std;
 
string dec_to_bin(int n){
  string res = "";
   while (n !=1)
   {
     if(n%2==1 ) {
      res+="1";
     } else{
      res+="0";
     }
     n/2;
   }
  //  reverse(res);
  return res;
} 

int main()
{
  cout<<dec_to_bin(13);
  return 0;
}
