#include <iostream>
#include <vector>
using namespace std;
 
void printWave(int arr[][4], int a, int b){
   for (int i = 0; i < b; i++)
   {
    int sum = 0;
      if (i%2==0)
      {
    for (int j = 0; j < a; j++)
    {
      cout<<arr[j][i]<<" ";      
    }
   }
   else{ 
    for (int j = a-1; j >= 0; j--)
    {
      cout<<arr[j][i]<<" ";
    }
   }
      } 
    cout<<endl; 
}

void printarr(int arr[][4], int a, int b){ 
    for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)   
    {
      cout<< arr[i][j]<<" ";
    } 
    cout<<endl;
  }
}
int main()
{
  int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  // printarr(arr, 3,4);  
  cout<<3&&1;
  // printWave(arr, 3,4);
  return 0;
}