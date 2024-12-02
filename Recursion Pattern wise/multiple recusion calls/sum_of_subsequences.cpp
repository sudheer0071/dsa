#include <iostream>
#include <vector>
using namespace std;
 

void subsequenceSum(int i, vector<int>ans, vector<int> arr, int s, int sum){
  if(i>=arr.size()) {
    if(sum==s){
    for(auto c : ans){
      cout<<c<<" ";
    }
    cout<<endl;
    }
    return;
  }
  ans.push_back(arr[i]);
  s += arr[i];
  subsequenceSum(i+1, ans, arr, s, sum);
  ans.pop_back();
  s -= arr[i];
  subsequenceSum(i+1, ans,  arr, s, sum);
  // return ans;
}

// to return any of the sebsequence
// bool subsequenceSum(int i, vector<int>ans, vector<int> arr, int s, int sum){
//   if(i>=arr.size()) {
//     if(sum==s){
//     for(auto c : ans){
//       cout<<c<<" ";
//     }
//     cout<<endl;
//     return true;
//     }
//     else return false;
//   } 
//   ans.push_back(arr[i]);
//   s += arr[i]; 
//   if(subsequenceSum(i+1, ans, arr, s, sum) == true){
//     return true;
//   }
//   s -= arr[i];
//   ans.pop_back();
//   if(subsequenceSum(i+1, ans,  arr, s, sum) == true) return true;
//   return false;
// }

// to count the number of subsequence sum
// int subsequenceSum(int i,  vector<int> arr, int s, int sum){
//   if(i>=arr.size()) {
//     if(sum==s){ 
//     return 1;
//     }
//     else return 0;
//   }
//   s += arr[i];
//  int l =  subsequenceSum(i+1,  arr, s, sum) ;
//   s -= arr[i];  
//  int r =  subsequenceSum(i+1,  arr, s, sum);
//  return l + r; 
// }

int main()
{
  vector<int> arr={4,3,6,7};
  vector<int> ans;
   subsequenceSum(0, ans,arr, 0,7);
  return 0;
}