#include <iostream>
#include <vector>
using namespace std;
 
vector<int> next_permuation(vector<int> &arr){
  int n = arr.size();
  int ind = -1;
  for (int i = 0; i < n; i--)
  {
    if (arr[i]<arr[i+1])
    {
      ind = 1;
      break;
    }
  }
  if (ind==-1)
  {
    reverse(arr.begin(), arr.end());
    return arr;
  }

for (int i = n-1; i < ind; i--)
{
  if (arr[i]>arr[ind])
  {
    swap(arr[i], arr[ind]);
  } 
}
  
  reverse(arr.begin() + ind + 1, arr.end());
return arr;
} 

int main()
{
  vector<int> arr = {2,1,5,4,3,0,0};
  next_permuation(arr)
  return 0;
}
