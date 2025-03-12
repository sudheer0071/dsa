// #include <iostream>
// #include <vector>
// using namespace std;

// bool serachNext(vector<vector<char>> &board, string word, int r, int c,int idx, int m, int n){
//   if(idx == word.length()) return true;

//   if(r<0 || c<0 || r>=n || c>=m ||  board[r][c] != word[idx] or board[r][c] == '!') return false;

// char s = board[r][c];
// board[r][c] = '!';

// bool top = serachNext(board, word, r-1, c, idx+1, m,n);
// bool right = serachNext(board, word, r, c+1, idx+1, m,n);
// bool bottom = serachNext(board, word, r+1, c, idx+1, m,n);
// bool left = serachNext(board, word, r, c-1, idx+1, m,n);

// board[r][c] = s;

// return top || right || bottom || left;
// }

// bool wordSearch(vector<vector<char>>  board, string word){
//   int m = board.size();
//   int n = board[0].size();

//   int idx = 0;
//   for (int i = 0; i < m; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       if(board[i][j] == word[j]){
//         if(serachNext(board, word, i,j,idx,m,n)) return true;
//       }
//     }
//   }
  
// return false;
// }


// int main()
// {
//   vector<vector<char>> board {{'A','B','C','E'},
//                               {'S','F','C','S'},
//                               {'A','D','E','E'}};

//         string word = "ABCCED";

//         bool res = wordSearch(board, word);
//         cout<<res;
//   return 0;
// }

#include <iostream>

#include <vector>

using namespace std;

bool isValid(vector < vector < char >> & board, int row, int col, char c) {
  for (int i = 0; i < 9; i++) {
    if (board[i][col] == c)
      return false;

    if (board[row][i] == c)
      return false;

    if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
      return false;
  }
  return true;
}

bool solveSudoku(vector < vector < char >> & board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[0].size(); j++) {
      if (board[i][j] == '.') {
        for (char c = '1'; c <= '9'; c++) {
          if (isValid(board, i, j, c)) {
            board[i][j] = c;

            if (solveSudoku(board))
              return true;
            else
              board[i][j] = '.';
          }
        }

        return false;
      }
    }
  }
  return true;
}
int main() {
    vector<vector<char>>board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };
   
    solveSudoku(board);
        	
    for(int i= 0; i< 9; i++){
        for(int j= 0; j< 9; j++)
            cout<<board[i][j]<<" ";
            cout<<"\n";
    }
    return 0;
}
