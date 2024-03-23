#include <iostream>
#include <vector>
using namespace std;
 
vector<int> reverse(vector<int> arr){
  int s=0, e=arr.size()-1;
  int mid = s+(e-s)/2;
  for (int i = 0; i <=  mid; i++)
  {
     swap(arr[s],arr[e]);
     s++;
     e--;
  }
  return arr;
}

vector<int> sumArray(vector<int>&a, int n, vector<int>&b, int m ){
  int i = n-1;
  int j = m-1;
  int carry = 0;
  vector<int> ans;
  while (i>=0&&j>=0)
  {
     int val1 = a[i];
     int val2 = a[j];

     int sum = val1+val2 + carry;
     carry = sum/10;
     sum = sum%10;
     ans.push_back(sum);
     i--;j--;
  }


  // first case
  while (i>=0)
  {
    int sum = carry + a[i];
      carry = sum/10;
     sum = sum%10;
     ans.push_back(sum);
     i--;
  } 
  // second case
  while (j>=0)
  {
      int sum = carry + a[j];
      carry = sum/10;
     sum = sum%10;
     ans.push_back(sum);
     j--;
  }

// third case  
while (carry!=0) 
{
  int sum = carry;
   carry = sum/10;
     sum = sum%10;
     ans.push_back(sum);
}
return reverse(ans);
 }



int main()
{
  return 0;
}
