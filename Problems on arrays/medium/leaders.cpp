#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
// vector<int> leader(vector<int> arr, int n){
//   vector<int> ans;
//   bool flag = true;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i; j < n; j++)
//     {
//       if (arr[i]<arr[j])
//       {   
//         flag=false;
//         break;
//       }else{
//         flag=true;
//       }
//     }
//     if (flag)
//     {
//       ans.push_back(arr[i]);
//     } 
//   }
//    return ans;
// } 

// Optimal Approach 
vector<int> leader(vector<int> arr, int n){
  vector<int> ans; 
      int max = INT16_MIN;
   for (int i = n-1; i > 0; i--)
   { 
    if (arr[i]>max)
    {
      max=arr[i];
      ans.push_back(arr[i]);
    }
    
   }  

  //  reverse(ans.begin(), ans.end());
   return ans;
} 


int main()
{
  vector<int> ar = {4, 7, 1, 0};
  vector <int>ans = leader(ar, 4);
  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
   
  return 0;
}
