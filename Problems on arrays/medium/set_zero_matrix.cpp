 
#include <iostream>
#include <vector>
using namespace std;
 
 
void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
    // set all non-zero elements as -1 in the row i:
    for (int j = 0; j < m; j++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}


void markCol(vector<vector<int>> &matrix, int n, int m, int j) {
    // set all non-zero elements as -1 in the col j:
    for (int i = 0; i < n; i++) {
        if (matrix[i][j] != 0) {
            matrix[i][j] = -1;
        }
    }
}

// Brute Force Approach
// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) { 
//     // Set -1 for rows and cols
//     // that contains 0. Don't mark any 0 as -1: 
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 markRow(matrix, n, m, i);
//                 markCol(matrix, n, m, j); 
//             } 
//         }
//     } 
//     // Finally, mark all -1 as 0:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     } 
//     return matrix;
// }

// Better Approach
// vector<vector<int>> zeroMatrix(vector<vector<int>> &arr, int n, int m) { 
//  int row[n]={0}, col[m]={0}; 
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == 0) {
//                  row[i]=1;
//                  col[j]=1;
//             } 
//         }
//     } 
//     // Finally, mark all -1 as 0:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j]!= 0) {
//                 if (row[i] || col[j])
//                 {
//                   arr[i][j]=0;
//                 } 
//             }
//         }
//     } 
//     return arr;
// }


// Optimal Approach
 vector<vector<int>> zeroMatrix(vector<vector<int>> &arr, int n, int m) {
    int row[n]={0}, col[m]={0}; 
     // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]

   int col0=1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                 arr[i][0]=0;
                 if(j!=0)
                 arr[0][j]=0;
                 else
                  col0 = 0;
            } 
        }
    }     

     for (auto it : arr) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout <<endl;
    }
        cout <<endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j]!=0)
            {
                if (arr[i][0]==0|| arr[0][j]==0)
                {
                    arr[i][j]=0;
                }
            }
        }
    } 
    if (arr[0][0]==0)
    {
        for (int j = 0; j < m; j++)
        {
            arr[0][j]=0;
        } 
    } 
    if (col0==0)
    {
      for (int i = 0; i < n; i++)
      {
        arr[i][0]=0;
      } 
    } 
    return arr;
 }


int main()
{
    vector<vector<int>> matrix = {{0, 1, 1,1}, {1, 0, 0,1},{1,1,0,1}, {1, 1, 1,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);
     for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        } 
    }
    return 0;
}

