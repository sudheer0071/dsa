#include <iostream>
#include <vector>
using namespace std;
 
vector<int> single_num_III(vector<int> &arr){
 long xorr = 0;
  vector<int> ans ;
  for (int i = 0; i < arr.size(); i++) { xorr^=arr[i];}
  long rightMost = (xorr&xorr-1) ^ xorr;
  int b1 = 0, b2=0;
  for (int i = 0; i < arr.size(); i++)
  {
    if(arr[i] & rightMost){
      b1^=arr[i];
    }else {
      b2^=arr[i];
    }
  }
  cout<<"b1 "<<b1<<endl;
  cout<<"b2 "<<b2<<endl;
  ans.push_back(b1);
  ans.push_back(b2);
  return ans;
   
}

int main()
{
  vector<int> arr = {2,4,2,14,3,7,7,3}; 
   single_num_III(arr);

  return 0;
}
