#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){ 
  int s = 0;
  int e = n-1;
  int mid = s+(e-s)/2;
  int ans = -1;
 while (s<=e)
 {
 
   if (arr[mid]== key)
   {
    ans = mid;
    e = mid-1;
   }
   else if (arr[mid]<key)
   {
    s = mid+1;
   }
    else 
   {
    e = mid-1;
   }
  mid = s+(e-s)/2;
 }
  return ans;
}

int lastOcc(int arr[], int n, int key){ 
   int s = 0;
  int e = n-1;
  int mid = s+(e-s)/2;
  int ans = -1;
 while (s<=e)
 {
 
   if (arr[mid]== key)
   {
    ans = mid;
    s = mid+1;
   }
   else if (arr[mid]<key)
   {
    s = mid+1;
   }
    else
   {
    e = mid-1;
   }
  mid = s+(e-s)/2;
 }
  return ans;
}


int main()
{
  int a[6] = {2,9,9,9,9,20};
  // int b[5] = {2,4,6,9,14};

  // int ind = binaraSearch(a,6, 4);
  int ind = firstOcc(a, 6, 9);
  int ind1 = lastOcc(a, 6, 9);
  cout<< "first occurence is :" << ind<< endl;
  cout<< "last occurence is :" << ind1<< endl;
  cout<< "No. of occurence: "<< ind1-ind + 1<< endl;
  return 0;
}
