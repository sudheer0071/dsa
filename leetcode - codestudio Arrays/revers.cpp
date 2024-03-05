#include <iostream>
using namespace std;

int reverse(int arr[], int n){
  int s=0, e=n-1;
  int mid = s+(e-s)/2;
  for (int i = 0; i <=  mid; i++)
  {
     swap(arr[s],arr[e]);
     s++;
     e--;
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
  int a[45] = {11,7,3,12,2};
  reverse(a,5);
  printarray(a,5);
  return 0;
}
