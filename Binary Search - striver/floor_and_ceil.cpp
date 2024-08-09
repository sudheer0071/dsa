#include <iostream>
#include <vector>
using namespace std;

pair<int, int> floor_ceil(int arr[], int n, int x){
  int s=0, e=n-1;
  int floor=-1,ceil=-1;
  while (s<=e)
  {
   int mid = s + (e-s)/2;
    if(x==arr[mid]) {
      floor = arr[mid];
      ceil = arr[mid]; 
      return {floor, ceil};
    }
    if (arr[mid]>x)
    {
      ceil = arr[mid];
      e = mid-1;
    }else { 
      floor = arr[mid];
      s = mid+1;
    } 
  } 
  return {floor, ceil};
}


int main()
{
 int arr[6] = {3, 4, 4, 7, 8, 10};
 pair<int , int> ans = floor_ceil(arr, 6, 5);
 cout<<"floor = "<< ans.first<< ", ceil = "<<ans.second;
 return 0;
}
