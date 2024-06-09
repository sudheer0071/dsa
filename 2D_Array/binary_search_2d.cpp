#include <iostream>
#include <vector>
using namespace std;
 
int binarySearch_2D(int arr[][4], int row, int col, int key){
    int s=0;
    int e= row*col -1; 
    int mid = (e-s)/2;
    
    while (s<e)
    {
      if (key==arr[mid][3])
      {
        return mid;
      }
      else if (key<arr[mid/col][mid%col])
      {
         e = mid-1;
      } 
      else{
        s = mid+1;
      }
      mid = (e-s)/2;
    }
    
}  
void printarr(int arr[][3], int a, int b){ 
    for (int i = 0; i < a; i++)
  {
    for (int j = 0; j < b; j++)   
    { 
      cout<< arr[i][j]<<"   ";
    } 
    cout<<endl;
  }
}
int main()
{
  int arr[3][3] = {1,2,3,4,5,6,7,8,9 };
  printarr(arr, 3,3);   
  return 0;
}