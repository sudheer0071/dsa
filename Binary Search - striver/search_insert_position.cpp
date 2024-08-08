#include <iostream>
#include <vector>
using namespace std;

int search_insert(int arr[], int n, int x){
  int s=0, e=n-1;
  int ans=0;
  while (s<=e)
  {
   int mid = s + (e-s)/2;

    if (arr[mid]>=x)
    {
      ans = mid;
      e = mid-1;
    }else { 
      s = mid+1;
    } 
  }
  return ans;
}

int main()
{
// int arr[4] = {1,2,4,7};
int arr[4] = {1,3,5,6};
cout<<search_insert(arr, 4,3);
  return 0;
}
