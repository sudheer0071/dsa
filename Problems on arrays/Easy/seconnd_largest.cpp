#include <iostream>
#include <vector>
using namespace std;
 
int second_largest(vector<int> arr){
 if(arr.size()<=1) return -1;

 int max = INT32_MIN; 
 int second_largest=0; 
 
 for (int i = 0; i < arr.size(); i++)
 {
  if (arr[i]>max)
  {  
    second_largest = max;
    max = arr[i];  
  }  else if (arr[i]>second_largest&& arr[i]<max)
  {
    second_largest = arr[i];
  }
  
 } 
 
  
 return (second_largest) ? second_largest : -1; 
}

int main()
{
  // vector<int> arr = {28, 43, 26, 65, 60, 54, 51, 35, 42, 48, 33, 40, 58, 38, 64, 47, 44, 49, 46, 25, 57, 39, 55, 45, 29, 32, 61, 53, 31, 36, 56, 63, 30 ,52, 27, 34, 50, 41, 37, 66, 62, 59}; 
  vector<int> arr = {12, 35, 322, 10, 34, 1};
  cout<<second_largest(arr);
  return 0;
}
