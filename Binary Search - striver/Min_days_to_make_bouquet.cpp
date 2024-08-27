#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_days(int arr[], int n, int m, int k){
  int minn = *min_element(arr, arr +n);
  int maxx = *max_element(arr, arr +n);
  cout<<minn<<endl;
  cout<<maxx<<endl;
  int s = minn, e = maxx;
  if(m*k>n) return -1;  
 while(s<=e)
  {
    int mid = s + (e-s)/2;
    cout<<"int i = "<<mid<<endl;
  int boq=0;
    int count = 0;
    for (int j = 0; j < n; j++)
    {

      if(arr[j]<=mid) count++;
      else{
          boq +=count/k;
      cout<<"boq = "<<boq<<endl; 
        count=0; 
      } 
    }
        boq +=count/k; 
     
    if (boq>=m)
    {
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
  return s;
}

int main()
{
  // int arr[9] = {7, 7, 7, 7, 13, 11, 12, 7};
  // int arr[9] =  {1, 10, 3, 10, 2};
  // int arr[9] =  {1,10,3,10,2};
  // int arr[9] =  {7,7,7,7,12,7,7};
  int arr[9] =  {7,7,7,7,12,7,7};
  cout<<min_days(arr, 7, 2,3);
  return 0;
}
