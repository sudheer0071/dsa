#include <iostream>
#include <vector>
#include <map>

using namespace std;

int fruitIntoBasket( vector <int> &arr){
   map <int , int> mpp;
   int l= 0, r=0; 
   int maxLen = 0;
   while(r<arr.size()){
      mpp[arr[r]]++;
      while(mpp.size() > 2){
        mpp[arr[l]]--;
        if(mpp[arr[l]] == 0) mpp.erase(arr[l]);
        l++;
      }
      maxLen = max(maxLen, r-l+1);
      r++;
   }
   return maxLen;
}

int main()
{
  vector<int> arr = {1,2,1,2,3};
  cout << fruitIntoBasket(arr) << endl;
  return 0;
}
