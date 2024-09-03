#include <iostream>
#include <vector>
using namespace std;
 
double medium (int arr1[], int arr2[], int n1, int n2){
  int i = 0,j=0,k=0;
  int arr[n1+n2] = {0};
  while (i<n1&& j<n2)
  {
    if (arr1[i]<arr2[j])
    {
      arr[k] = arr1[i]; 
      k++; i++;
    }
    else if(arr2[j]<arr1[i]){ 
      arr[k] = arr2[j];
      k++; j++; 
    } 
  }
    
   while(i<n1){
    arr[k] = arr1[i];i++;k++;
   }

   while(j<n2){ 
    arr[k] = arr2[j];j++;k++;
   }

if ((n1+n2)%2==1) // odd
{  
  return (double)arr[(n1+n2)/2];
}
  double median = ((double)arr[(n1+n2)/2] + arr[(n1+n2)/2 - 1])/2.0;
  return median ;
} 

int main()
{
  
  // int arr1[3] = {2,4,6};
  // int arr2[3] = {1,3,5};

  int arr1[3] = {1,3};
  int arr2[3] = {2};
  // int arr1[3] = {2,4,6};
  // int arr2[3] = {1,3};

  cout<<medium(arr1,arr2,2,1);

  return 0;
} 
