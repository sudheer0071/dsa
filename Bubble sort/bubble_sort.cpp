#include <iostream>
using namespace std;
 
int bubble_sort(int arr[], int n){
  bool swapped = false;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if (arr[j]>arr[j+1]) 
        swap(arr[j],arr[j+1]);  
        swapped = true;
    } 

    
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
  int a[6] = {10,1,7,6,14,9};
  cout<<"Before sort: ";
   printarray(a,6);
  
  bubble_sort(a,6);
  cout<<"After sort: ";
  printarray(a,6);
  return 0;
}
