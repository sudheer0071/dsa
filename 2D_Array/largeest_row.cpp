#include <iostream>
#include <vector>
using namespace std;
 
int largestRowSum(int arr[][4], int row, int col){
  int maxi = INT16_MIN;
  int rowIndex = -1;
    for (int i = 0; i < row; i++)
  {
    int sum = 0;
    for (int  j = 0; j < col; j++)
    {
      sum+=arr[i][j];
    } 
    
     if (sum>maxi)
     {
      maxi = sum;
      rowIndex = i;
     }
     
  } 
   cout<<"Largest sum is "<<maxi<<endl;
  return rowIndex;
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
  int index =  largestRowSum(arr,3,4);
  cout<<"Max row is at index: "<<index ;

  return 0;
}
