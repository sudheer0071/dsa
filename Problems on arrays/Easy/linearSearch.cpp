#include <iostream>
#include <vector>
using namespace std;
 
int linearSearch(int arr[], int n, int k){
  for (int i = 0; i < n; i++)
  {
    if (k == arr[i])
    {
      return i;
    } 
  }
  return -1;
}

int main()
{
  int arr[5] = {1,2,3,4,5};
  cout<<linearSearch(arr, 5, 7);
  return 0;
}
