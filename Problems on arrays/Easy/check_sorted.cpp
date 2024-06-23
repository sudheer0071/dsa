#include <iostream>
#include <vector>
using namespace std;

bool sorted(int arr[], int n)
{
  int voilate = 0;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < arr[i - 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  cout << sorted(arr, 5);
  return 0;
}
