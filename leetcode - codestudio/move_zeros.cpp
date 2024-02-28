#include <iostream>
using namespace std;

void move_zeros(int arr[], int n){
  int nonzero = 0;
 for(int j=0;j<n;j++)
  {
    if (arr[j]!=0)
    {
      swap(arr[j], arr[nonzero]);
      nonzero++;
    } 
  }
  
}
 
 void printarray(int arr[],int n){
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i] << " ";
   }
 }
int main()
{
    int a[5] = {0,2,0,3,12};
  move_zeros(a,5);
  printarray(a,5);
  return 0;
  
}
