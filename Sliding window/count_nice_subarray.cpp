#include <iostream>
#include <vector>
#include <map>

using namespace std;

int nice_subArray( vector<int> arr, int k){
  if(k<0) return 0;
 int l = 0, r=0;
  int sum = 0,cnt=0;
 while (r<arr.size())
 {
    sum+=(arr[r])%2;
    while(sum>k){
      sum-=(arr[l])%2;
      l++;
    }
    cnt+=(r-l+1);
    r++;  
 }
 return cnt;
}

int mainAns(vector<int> &arr, int k){
  return nice_subArray(arr, k) - nice_subArray(arr, k-1);
}

  
int main()
{
vector<int> a = {1,1,2,1,1};
  cout<<mainAns(a, 3);
  return 0;
}
