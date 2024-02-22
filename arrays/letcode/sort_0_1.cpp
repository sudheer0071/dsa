#include <iostream>
using namespace std;
 
void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] <<" ";
  }
  cout << endl;
}

void sortOne(int arr[], int n){
  int l=0, r=n-1;
  while (l<=r)    
  {
    while (arr[l]==0 && l<r)
    {
       l++;
    }
    while (arr[r]==1 && l<r)
    {
       r--;
    }
    if (l<r)
    {
    swap(arr[l],arr[r]);
    l++;
    r--;
       
    }
    
  }
  
}
int main()
{
  int arr[8] = {1,1,0,1,0,1,0,1};
  sortOne(arr, 8);
  printArray(arr, 8);

  return 0;
}
