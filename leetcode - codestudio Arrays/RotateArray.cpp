#include <iostream>
#include <vector>
using namespace std;

 
void rotate(vector<int>& nums, int k) {
      
    
      int n = nums.size();
      vector<int> temp(n);
       
      for(int i =0;i<n;i++) { 
        temp[(i+k)%n] = nums[i]; 
      }
       
      for(int i=0;i<nums.size();i++) 
      {
        nums[i] = temp[i];
      } 
    }
 
 void printarray(vector<int>arr){
   for (int i = 0; i < arr.size(); i++)
   {
    cout<<arr[i] << " ";
   }
 }

int main()
{
    vector<int>a = {4,5,6,7,8,9};
  rotate(a,2);
  printarray(a);
  
  return 0;
  
}