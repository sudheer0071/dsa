#include <iostream>
using namespace std;
 
void alternate_swap(int arr[], int n){
  for (int i = 0; i < n; i+=2)
  {
    if (i+1 < n){
    swap(arr[i], arr[i+1]);
    }
  }
 
}


void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr1[8] = {5,2,8,7,9,6,3,4};
  int arr2[5] = {7,9,5,6,1};

  alternate_swap(arr1, 8);
  printArray(arr1, 8);

  cout << endl;
  alternate_swap(arr2, 5);
  printArray(arr2, 5);

  return 0;
}
