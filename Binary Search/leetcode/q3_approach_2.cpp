#include <iostream>
using namespace std;
 
int search(int arr[], int n, int k){
  int s = 0, e = n -1;
   while (s<=e)    {
   int mid = s + (e-s)/2;
    if (arr[mid] == k)
    {
      return mid;
    }

    if (arr[mid]>=arr[s]) 
    {
      if (k >=arr[s] && k<arr[mid])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else{
        if (k >arr[mid] && k<=arr[e])
        {
          s = mid + 1;
        }
        else
        {
          e = mid - 1;
        }
        
      }
    }
   return -1; 
}

int main()
{
  // int a[6] = {2,4,6,9,14,20};
  // int b[5] = {0,10,8,5,3};
  int b[5] = {7,8,10,1,2};

  // int ind = binaraSearch(a,6, 4);
  int ind = search(b, 5, 10);
  cout<< "Element is at index :" << ind<< endl; 
  return 0;
}
