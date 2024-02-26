#include <iostream>
using namespace std;
 
int unique(int arr[], int n){
  int ans =  0;
  for (int i = 0; i < n; i++)
  {
     cout<< "XOR of " << ans;
     ans = ans^arr[i];
       cout<< " and "<< arr[i]<< " is :" <<ans<<endl; 
  }
  return ans;
} 

int main()
{

  int arr[7] = {2, 3, 1, 6, 3, 6, 2};
  cout<<"\nUniue element is: "<< unique(arr, 7);
  return 0;
}


