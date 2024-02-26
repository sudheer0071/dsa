#include <iostream>
#include <vector>
using namespace std;
 
int findDuplicate(vector<int> & arr) 
{
    // Write your code here
    // asked in apple and google
    int ans=0;
   for(int i=0; i<arr.size(); i++){
       ans = ans^arr[i];
   }

   for(int i=1; i<arr.size(); i++){
       ans = ans^i;
   }
   
}

int main()
{
  
  return 0;
}
