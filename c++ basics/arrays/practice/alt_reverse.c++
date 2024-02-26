#include <iostream>
using namespace std;
 
void alt_reverse(int arr[], int n){
  for (int i = 0; i < n; i+=2)
  {
     if (i+1 < n){
    swap(arr[i],arr[i+1]);
     }
  }

}


void printArray(int arr[], int n){
  for (int i = 0; i <n; i++)
  {
        cout<<arr[i]<<" ";
     
  }
  cout << endl;
 

} 

int main()
{
  int arr1[5] = {3,4,56,2,3};
  int arr2[6] = {6,7,34,7,2,4};

  alt_reverse(arr1, 5);
  printArray(arr1, 5);
  // alt_reverse(arr2, 6);
  // printArray(arr2, 6);
  return 0;
}
