#include <iostream>
#include <vector>
using namespace std;
 
void printWave(int arr[][4], int a, int b){
  int count = 0;
   for (int i = count; i < a; i++)
   {
    for (int j = 0; j < b; j++)
    {
      cout<<arr[i][j]<<" ";
    }   
      count++;
      break;
  }
  
   for (int i = 0; i < b; i++)
   {
    for (int j = count; j < a; j++)
    {
      cout<<arr[j][i]<<" ";
    }   
    break;
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
  printarr(arr, 3,4);  
  // cout<<3&&1;
  printWave(arr, 3,4);
  return 0;
}