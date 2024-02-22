#include <iostream>
using namespace std;
 
int pivot(int arr[], int n){
   int s = 0, e = n-1;
  //  while (s<e)
  //  {
  //  int mid = s + (e-s)/2;
  //     if (arr[mid] < arr[mid - 1])
  //     {
  //      return arr[mid];
  //     }
  //     if (arr[mid] > arr[mid + 1])
  //     {
  //       return arr[mid+1];
  //     }
  //     if (arr[mid]>=arr[s])
  //     {
  //       s = mid + 1;
  //     }
  //     // if (arr[mid]<=arr[e])
  //     else
  //     {
  //       e = mid-1;
  //     }
      
  //  }

   int mid = s + (e-s)/2;
   while (s<e)    
   {

    if (arr[mid] >= arr[mid-1])
    // if (arr[mid] >= arr[0])
    {
      s = mid+1;
    }
    else
    {
       e=mid;
    }
    mid = s + (e-s)/2;

   }
   
   return arr[s];
}

int main()
{
    // int a[6] = {2,4,6,9,14,20};
  // int b[5] = {0,10,8,5,3};
  int b[5] = {7,8,10,1,2};

  // int ind = binaraSearch(a,6, 4);
  int ind = pivot(b, 5);
  cout<< "Pivot element is :" << ind<< endl; 
  return 0;
}