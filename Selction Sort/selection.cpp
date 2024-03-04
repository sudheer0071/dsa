#include <iostream>
using namespace std;

int selection_sort(int arr[], int n){
   for (int i = 0; i < n; i++) 
   {
    int min = i; 
    for (int j = i+1; j < n; j++)
    {
      if (arr[j]<arr[min]) 
        min = j;  
    }
    swap(arr[min], arr[i]);
   }
} 
 
int printarray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<< " ";
  }
  cout<<endl;
}
 
int main()
{
  int a[5] = {5,3,1,6,8};
  cout<<"Before sort: ";
  
   printarray(a,5);
  selection_sort(a,5);
  cout<<"After sort: ";
  printarray(a,5);
  return 0;
}
