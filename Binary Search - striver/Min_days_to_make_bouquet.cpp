#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_days(int arr[], int n, int m, int k){
  int minn = *min_element(arr, arr +n);
  int maxx = *max_element(arr, arr +n);
  cout<<minn<<endl;
  cout<<maxx<<endl;
  if(m*k>n) return -1;  
  for (int i = minn; i <=maxx; i++)
  {
  int boq=0;
    int count = 0;
    for (int j = 0; j < n; j++)
    {

      if(arr[j]<=i) count++;
      else{
          boq +=count/k;
      cout<<"boq = "<<boq<<endl; 
        count=0; 
      } 
    }
        boq +=count/k; 
     
    if (boq>=m)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  // int arr[9] = {7, 7, 7, 7, 13, 11, 12, 7};
  // int arr[9] =  {1, 10, 3, 10, 2};
  // int arr[9] =  {1,10,3,10,2};
  int arr[9] =  {7,7,7,7,12,7,7};
  int arr[9] =  {7,7,7,7,12,7,7};
  cout<<min_days(arr, 7, 2,3);
  return 0;
}
