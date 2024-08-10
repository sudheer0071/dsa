#include <iostream>
#include <vector>
using namespace std;
 
int rotated_search(int arr[], int n, int k){
  int s = 0, e = n-1;

  while (s<=e)
  {
  int mid = s + (e-s)/2;
    if (arr[mid]==k)
    {
      return mid;
    }
    if (arr[mid]>k)
    { 
      if (arr[mid] > arr[mid+1])
      {  
        s = mid+1;
      }
      else{
      e = mid-1;
      }
    } else { 
      e = mid-1;
    } 
  }
    return -1; 
} 

    int search(vector<int>& nums, int target) {
        int n = nums.size();
          int s = 0, e = n-1;

  while (s<=e)
  {
  int mid = s + (e-s)/2;
    if (nums[mid]==target)
    {
      return mid;
    }
    if (nums[mid]>target  )
    { 
      if (nums[mid] > nums[mid+1])
      {  
        s = mid+1;
      }
      else{
      e = mid-1;
      }
    } else if(nums[mid]<target) { 
      s = mid+1;
    } else{
      e = mid -1;
    }
  }
    return -1; 
    }
int main()
{
//  int arr[10] =  {4,5,6,7,0,1,2,3};
//  int arr[10] =  {4,5,6,7,0,1,2};
//  vector<int> arr =  {4,5,6,7,0,1,2};
//  vector<int> arr = {1,3};
 vector<int> arr = {3,5,1};

//  int arr[10] =  {1};
 cout<<search(arr,3);
  return 0;
}
