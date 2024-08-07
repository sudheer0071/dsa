#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int repeating_missing(int arr[], int n){
  sort(arr, arr+n);
 

  int num = 0;
  int num1 = 0;
  int numMain = INT16_MAX;
  for (int i = 1; i < n; i++)
  { 
    if (arr[i]==arr[i-1])
    {
      num = arr[i];
      arr[i] = num+1;
    }
    // if (arr[n-i]!=n-i+1)
    // {
    //   num1 = arr[n-i]+1;
    //   cout<<arr[n-i]<<endl;
    //   if (num1!=arr[i-1])
    //   {
    //     /* code */
    //   cout<<"num 1 = "<<num1<<endl;
    //   }
      
    // }
    
    // if (arr[i]!=arr[i-1]+1)
    // { 

    //   cout<<"arr[i] = "<<arr[i]<<", arr[i]-1 = "<<arr[i-1]+1<<endl;
    //   // cout<<arr[i]<<endl;
    //   num1 = arr[i]+1;
    //   // break;
    // }
     numMain = min(numMain, num);
  }

for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}


  cout<<"repeating = "<<numMain<<endl;
  cout<<"missing = "<<num1<<endl;
}

int main()
{
  // int arr[5] = {3,1,2,5,3};
  int arr[10] = {3,1,2,5,4,6,7,5};
  repeating_missing(arr, 8);
  return 0;
}
