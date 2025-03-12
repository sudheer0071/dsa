#include <iostream>
#include <vector>
using namespace std;
 
 bool isSafe(int row, int col, vector<string> board, int n){
  int dupRow = row;
  int dupCol = col;
  while (row >=0 && col >=0)
  {
    if(board[row][col]=='Q'){
      return false;
    }
    row--;
    col--;
  }
  
  row = dupRow;
  col = dupCol;

  while (col>=0)
  {
    if(board[row][col]=='Q'){
      return false;
    }
    col--;
  }

  row = dupRow;
  col = dupCol;
  
  while (row < n && col>=0)
  {
    if(board[row][col]=='Q'){
      return false;
    }
    row++;
    col--;
  }
  return true;
 }

//  void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
//   if(col==n){
//     ans.push_back(board);
//     return;
//   }

//   for (int row = 0; row < n; row++)
//   {
//     if(isSafe(row,col,board,n)){
//       board[row][col] = 'Q';
//       solve(col +1, board, ans, n);
//       board[row][col] = '.';
//     }
//   } 
//  }


  // vector < vector < string >> solveNQueens(int n) {
  //     vector < vector < string >> ans;
  //     vector < string > board(n);
  //     string s(n, '.');
  //     for (int i = 0; i < n; i++) {
  //       board[i] = s;
  //     }
  //     solve(0, board, ans, n);
  //     return ans;
  //   }


// Optimal Solution

 void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int>&leftRow, vector<int>& upperDiagonal, vector<int>& lowerDiagonal, int n){
  if(col==n){
    ans.push_back(board);
    return;
  }

  for (int row = 0; row < n; row++)
  {
    if(leftRow[row]==0 && upperDiagonal[n-1+col-row]==0&& lowerDiagonal[row+col]==0){
      board[row][col] = 'Q';
      leftRow[row] = 1;
      upperDiagonal[n-1+col-row] = 1;
      lowerDiagonal[row+col] = 1;
      solve(  col+1,board,ans,leftRow, upperDiagonal,lowerDiagonal,n);
      board[row][col] = '.';
      leftRow[row] = 0;
      upperDiagonal[n-1+col-row] = 0;
      lowerDiagonal[row+col] = 0;
    }
  } 
 }
 
  vector < vector < string >> solveNQueens(int n) {
      vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      vector<int> leftrow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
      solve(0, board, ans,leftrow, upperDiagonal, lowerDiagonal, n);
      return ans;
    }



int main()
{
  vector < vector < string >> ans = solveNQueens(4);
  for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}

