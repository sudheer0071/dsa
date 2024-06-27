#include <iostream>
#include <vector>
using namespace std;
 
// brute force 
// void move_zero(int arr[], int n){
//   int temp[n];
//   int j=0;
//   int zero=n-1;
//   for (int i = 0; i <n; i++)
//   {
//     if (arr[i]!=0)
//     { 
//       temp[j] = arr[i];  
//       j++; 
//     }
//     else{   
//     temp[zero] = arr[i]; 
//     zero--; 
//     } 
//   } 
  
//   for (int i = 0; i < n; i++)
//   {
//     arr[i] = temp[i];
//   }
  
//     // arr=temp;
// }

// optimal  approach
void move_zero(int arr[],int n){
  int nonzero = 0;
  for (int  i = 0; i < n; i++)
  {
    if (arr[i]!=0)
    {
      swap(arr[i],arr[nonzero]);
      nonzero++;
    }
    
  }
  
}

int main()
{
  int arr[8] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
  move_zero(arr, 8);

for (int i = 0; i < 8; i++)
{
  cout<<arr[i]<<" ";
}

  return 0;
}
