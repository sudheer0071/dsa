#include <iostream>
#include <vector>
using namespace std;
 
int rowSum(int arr[][3], int row, int col){
  cout<<"Printing sum..\n";
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int  j = 0; j < col; j++)
    {
      sum+=arr[i][j];
    }
      cout<<sum<<" ";
  } 
  //  cout<<endl;
}

void printarr(int arr[][3], int a, int b){
 
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
  int arr[3][3] = {1,2,3,4,5,6,7,8,9};
  printarr(arr, 3,3);
  rowSum(arr,3,3);
  return 0;
}
