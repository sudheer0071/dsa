#include <iostream>
#include <vector>
using namespace std;
 
// void printWave(int arr[][3], int a, int b){
//   int count = 0;
//    for (int i = count; i < a; i++)
//    {
//     for (int j = 0; j < b; j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }   
//       count++;
//       break;
//   }
//    for (int i = b-1; i >= 0; i--)
//    {
//     for (int j = count; j < a; j++)
//     {
//       cout<<arr[j][i]<<" ";
//     }   
//     break;
//   }
//    for (int i = a-1; i >= 0; i--)
//    {
//     for (int j = b-1; j >=0; j--)
//     {
//       cout<<arr[i][j]<<" ";
//     }   
//     break;
//   } 
//       for (int i = 0; i < b; i++)
//    {  
//     for (int j = a-2; j >0; j--)
//     {
//       cout<<arr[j][i]<<" ";
//     }
//     break;
//       } 
//     cout<<endl;
// }


   vector<int> spiralOrder(vector<vector<int> >& matrix) { 
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        } 
        return ans;
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
  int arr[3][3] = {1,2,3,4,5,6,7,8,9 };
  printarr(arr, 3,3);   
  return 0;
}