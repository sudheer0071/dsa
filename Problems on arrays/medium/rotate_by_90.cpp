#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
// vector<vector<int>> rotate_90(vector<vector<int>> arr, int m, int n){
//   vector<vector<int>> ans(n, vector<int>(m));
//    for (int i = 0; i < n; i++)
//    {
//     for (int j = 0; j < m; j++)
//     {  
//       ans[j][m-i-1] = arr[i][j];
//     }
//     cout<<endl;
//    }   
//      return ans;
// }

// Optimal Approach
vector<vector<int>> rotate_90(vector<vector<int>> arr, int m, int n){
  vector<vector<int>> ans(n, vector<int>(m)); 
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < i; j++)
    { 
      // tried from my side
        // temp = arr[0][j];
        if (j==m-1)
        {
          // arr[i][j]=temp;
        }else{ 
        }
        // arr[i][j] = arr[m-j -1][i];
        swap(arr[i][j], arr[j][i]);
    } 
   }   

  //  for (int i = 0; i < n; i++)
  //  {
  //   reverse(arr[i].begin(), arr[i].end());
  //  }
   
     return arr;
}


int main()
{
vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9} };
int n = arr.size();
int m = arr[0].size();
vector<vector<int>> ans = rotate_90(arr, n, m);
for(auto it:ans){
  for(auto ele:it){
    cout<<ele<<" ";
  }
  cout<<endl;
}
  return 0;
}
