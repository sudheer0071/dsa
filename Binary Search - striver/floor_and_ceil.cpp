#include <iostream>
#include <vector>
using namespace std;

int floor_ceil(int arr[], int n, int x){
  int s=0, e=n-1;
  int floor=-1,ceil=-1;
  while (s<=e)
  {
   int mid = s + (e-s)/2;
    if(x==arr[mid]) {
      floor = arr[mid];
      ceil = arr[mid];
  cout<<"fllor: "<<floor<<endl;
  cout<<"ceil: "<<ceil<<endl;
      return floor, ceil;
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
  cout<<"fllor: "<<floor<<endl;
  cout<<"ceil: "<<ceil<<endl;
  return floor, ceil;
}


int main()
{
 int arr[6] = {3, 4, 4, 7, 8, 10};
 cout<<floor_ceil(arr, 6, 2);
  return 0;
}
