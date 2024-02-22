#include <iostream>
using namespace std;
 

int getMax(int arr[], int n){
  int max = INT32_MIN;
  arr[2] = 10;
  arr[3] = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
    return max;
  
}

int getMin(int arr[], int n){
  int min = INT32_MAX;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
    return min;
  
}

int main()
{ 
int arr1[5] = {5,6,7,3,2} ;
// { int arr1[6] = {5,6,7,3,2} ;
int ans = getMax(arr1, 5);
int ans1 = getMin(arr1, 5);
cout << ans << endl;
cout << ans1<< endl;

  return 0;
}
