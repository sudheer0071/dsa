// #include<bits/stdc++.h>
#include <vector>
#include <iostream> 
using namespace std;


// Brute Force
//   vector<int> RearrangebySign(vector<int>A, int n){ 
//   vector<int> pos;
//   vector<int> neg; 
//   for(int i=0;i<n;i++){ 
//       if(A[i]>0) pos.push_back(A[i]);
//       else neg.push_back(A[i]);
//   } 
//   // Positives on even indices, negatives on odd.
//   for(int i=0;i<n/2;i++){
 //       A[2*i] = pos[i];
//       A[2*i+1] = neg[i];
//   } 
//    return A; 
// }

// Optimal Approach 
  vector<int> RearrangebySign(vector<int>A, int n){ 
  vector<int> ans(n,0); 
   int pos = 0, neg=1;
  for(int i=0;i<n;i++){
      if (A[i]>0)
      {
         ans[pos] = A[i];
         pos+=2;
      }else{
         ans[neg] = A[i]; 
         neg+=2; 
      }
      
  }
   
   return ans; 
}


int main() {
    
  // Array Initialisation.
  int n = 4;
  vector<int> A {1,2,-4,-5};

  vector<int> ans = RearrangebySign(A,n);
   for (int i = 0; i < ans.size(); i++)
   {
    cout<<ans[i]<<" ";
   }
   

  return 0;
} 