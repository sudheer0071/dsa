#include <iostream>
#include <vector>
using namespace std;

bool serachNext(vector<vector<char>> &board, string word, int r, int c,int idx, int m, int n){
  if(idx == word.length()) return true;

  if(r<0 || c<0 || r>=n || c>=m ||  board[r][c] != word[idx] or board[r][c] == '!') return false;

char s = board[r][c];
board[r][c] = '!';

bool top = serachNext(board, word, r-1, c, idx+1, m,n);
bool right = serachNext(board, word, r, c+1, idx+1, m,n);
bool bottom = serachNext(board, word, r+1, c, idx+1, m,n);
bool left = serachNext(board, word, r, c-1, idx+1, m,n);

board[r][c] = s;

return top || right || bottom || left;
}

bool wordSearch(vector<vector<char>>  board, string word){
  int m = board.size();
  int n = board[0].size();

  int idx = 0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(board[i][j] == word[j]){
        if(serachNext(board, word, i,j,idx,m,n)) return true;
      }
    }
    
  }
  
return false;
}


int main()
{
  vector<vector<char>> board {{'A','B','C','E'},
                              {'S','F','C','S'},
                              {'A','D','E','E'}};

        string word = "ABCCED";

        bool res = wordSearch(board, word);
        cout<<res;
  return 0;
}
