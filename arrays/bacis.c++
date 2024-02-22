#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int num[15];
  // cout << num[0] << endl;

  // int second[3] = {96,9,6};
  // cout << second[2] << endl;

  // int third[15] = {2, 7};
  int third[15] = {0};
  // printArray(third, 15); 

  char ch[5] = {'a','b','c','d'};
  cout << ch[2];
  
  return 0;
}
