#include <iostream>
#include <vector>
using namespace std;

// Varient 1
int varient1(int n, int r){
  // n = n-1;
  // r = r-1;
  int res=1;
  for (int i = 0; i < r; i++)
  { 
    res= res*(n-i);
    res = res/(i+1); 
  }
  return res;
} 

// Varient 2
// Brute force
// void varient2(int n ){  
//    n=n-1;
//    cout<< "n = "<<n<<endl;
//   for (int i = 0; i <=n; i++)
//   { 
//     int elem = varient1(n, i) ;
//     cout<<elem<<" ";
//   } 
// } 

// Better Approach
vector<int> varient2(int n ){    
  vector<int>res;
  res.push_back(1);
   long long ans =1; 
  //  cout<<"1"<<endl;
  for (int i = 1; i <n; i++)
  { 
    ans = ans*(n-i);
    ans = ans/i;
    // cout<<ans<<" ";
    res.push_back(ans);
  } 
  return res;
} 

// Varient 3 
// Brute Force Approach
// vector<vector<int>> varient3(int n){

//   vector<vector<int>> ans;

//   for (int i = 1; i <= n; i++)
//   {
//   vector<int> anss; 
//   for (int j = 1; j <= i; j++)
//   {
//     /* code */
//     anss.push_back( varient1(i-1, j-1)); 
//   }
//   ans.push_back(anss);
//   }
//   return ans;
// }

// Optimal Approach
vector<vector<int>> varient3(int n){
  vector<vector<int>> ans;

  for (int i = 1; i <=n; i++)
  {
    ans.push_back( varient2(i)); 
  }
  return ans;
}


int main()
{
vector<vector<int>>ans = varient3(6); 
for(auto it:ans){
  for(auto ele:it){
    cout<<ele<<" ";
  }
  cout<<endl;
}
  return 0;
}
