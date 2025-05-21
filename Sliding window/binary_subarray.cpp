#include <iostream>
#include <vector>
#include <map>

using namespace std;

int binary_subarray( vector<int> arr, int k){
if(k<0) return 0;
 int l = 0, r=0;
  int sum = 0,cnt=0;
 while (r<arr.size())
 {
    sum+=arr[r];
    while(sum>k){
      sum-=arr[l];
      l++;
    }
    cnt+=(r-l+1);
    r++;  
 }
 return cnt;
}

int mainAns(vector<int> &arr, int k){
  return binary_subarray(arr, k) - binary_subarray(arr, k-1);
}

int main()
{
vector<int> a = {1,0,1,0,1};
  cout<<mainAns(a, 2);
  return 0;
}
