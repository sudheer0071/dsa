#include <iostream>
#include <vector>
using namespace std;
 
int colSum(int arr[][4], int row, int col){
  cout<<"Printing sum..\n";
  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    for (int  j = 0; j < row; j++)
    {
      sum+=arr[j][i];
    }
      cout<<sum<<" ";
  } 
  //  cout<<endl;
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
  colSum(arr,3,4);
  return 0;
}
