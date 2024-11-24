#include <iostream>
#include <vector>
using namespace std;
 
// with 3 pointers approach 
void reverse( int l, int r, int arr[]){
  if(l>=r) return ; 
  swap(arr[l],arr[r]); 
  reverse(l+1,r-1, arr);
  // return arr;
}

int main()
{
  int arr[] = {1,2,3,4,5};
   reverse(0,4,arr);

  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
