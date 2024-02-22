#include <iostream>
using namespace std;

int binaraSearch(int arr[], int n, int key){
  int s = 0; 
  int e = n-1, mid = s + (e-s)/2;

  while (s<=e)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (key<arr[mid])
    {
      e = mid -1;
    }
    else
    {
      s = mid+1;
    }
    mid = (s+e)/2;
    
  }
  return -1;
}

int main()
{
  int a[6] = {2,4,6,9,14,20};
  int b[5] = {2,4,6,9,14};

  // int ind = binaraSearch(a,6, 4);
  int ind = binaraSearch(b, 5, 9);
  cout<< "Index is :" << ind<< endl;
  return 0;
}
