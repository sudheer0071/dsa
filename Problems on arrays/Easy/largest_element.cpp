#include <iostream>
#include <vector>
using namespace std;
 
int largest(vector<int> arr){
 int max = 0;
 for (int i = 0; i < arr.size(); i++)
 {
  if (arr[i]>max)
  { 
    max = arr[i];
  }
  
 }
 return max;
  
}

int main()
{
  vector<int> arr = {3,4,7,1,2}; 
  cout<<largest(arr);
  return 0;
}
