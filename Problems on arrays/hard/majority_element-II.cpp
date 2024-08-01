#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Better Approach - Using maps
// vector<int> majorityElement(int arr[], int n){
//   vector<int> ans;
//    map<int, int> map;
//   for (int i = 0; i < n; i++)
//   {
//     map[arr[i]]++;
//   }
  
//   for(auto it:map){
//     if (it.second>n/3)
//     {
//        ans.push_back(it.first);
//     }
    
//   }
//   return ans;
// }


//Optimal Approach - By Moore's Voting Algorithm
vector<int> majorityElement(int arr[], int n){
  vector<int> ans;
  int ele1 = INT16_MIN;
  int ele2 = INT16_MIN;
  int count1 = 0;
  int count2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==ele1)
    {
      count1++;
    }
    
    else if (arr[i]==ele2)
    {
      count2++;
    }

    else if (count1==0 && ele2 != arr[i])
    {
       ele1=arr[i];
       count1++;
    }
    else if (count2==0 && ele1 != arr[i])
    {
       ele2=arr[i];
       count2++;
    }
    else{
      count1--;
      count2--;
    }
  }
  count1=0; count2=0;
  for (int i = 0; i < n; i++)
  {
    if (ele1 == arr[i])
    {
      count1++;
    }
    if (ele2 == arr[i])
    {
      count2++;
  }
  } 

  int mini = (int)(n/3) + 1;
  if (count1>mini)
  {
    ans.push_back(ele1);
  }
  if (count2>mini)
  {
    ans.push_back(ele2);
  } 
  return ans; 
} 

int main()
{
  // int arr[6] = {1,2,2,3,2};
  int arr[6] = {11,33,33,11,33,11};
  vector<int>ans  = majorityElement(arr, 5);
  for(auto it:ans){
    cout<<it<<" ";
  }
  return 0;
}
