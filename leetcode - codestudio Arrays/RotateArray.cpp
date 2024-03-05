#include <iostream>
using namespace std;
 
void rotateArray(int arr[],int n, int k){
  
  int temp[n];
  for (int i = 0; i < n; i++)
  {
    temp[(i+k)%n] = arr[i];
  }
  arr = temp;
}
 
 void printarray(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i] << " ";
   }
 }
int main()
{
    int a[6] = {4,5,6,7,8,9};
  rotateArray(a,6,2);
  printarray(a,5);
  return 0;
  
}