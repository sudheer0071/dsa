#include <iostream>
#include <vector>
using namespace std;

// Brute force Approach - Iterating through every element and check for peak eleemebt;
// vector<int> peak_element(vector<vector<int>>& arr){
//   int n = arr.size();
//   int m = arr[0].size();
//   for (int i = 0; i < n; i++)
//   {
//     arr[i].insert(arr[i].begin(),-1);
//     arr[i].push_back(-1);
//   }
//   vector<int> boundaryRow(m+2, -1);
//   arr.insert(arr.begin(),boundaryRow);
//   arr.push_back(boundaryRow);
//  for(auto ans:arr){
//    for(auto it:ans){
//     cout<<it<<" ";
//   }
//   cout<<endl;
//  }
//  for (int i = 1; i < n+1; i++)
//  {
//   for (int j = 1; j < m+1; j++)
//   {
//     cout<<"inside"<<endl;;
//       cout<<arr[i][j]<<endl;
//     if (arr[i][j]>arr[i][j-1] && arr[i][j]> arr[i][j+1] && arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i+1][j])
//     {
//       cout<<".............."<<endl;
//        return {i-1,j-1};
//     } 
//   } 
//  }
//  return {-1}; 
// } 



// Brute force Approach - Iterating through every element and check for peak eleemebt;

int maxElem(vector<int>& arr,int n){
  int maxx = INT8_MIN, idx = -1;
  for (int i = 0; i < n; i++)
  {
cout<<arr[i]<<" ";
     if(arr[i]>maxx){
      maxx = arr[i];
      idx = i;
     }
  }
  // for(auto it:arr) cout<<it<<" ";
  cout<<endl;
  return idx;
}

vector<int> peak_element(vector<vector<int>>& arr){
  int n = arr.size();
  int m = arr[0].size();
 
 
  for (int i = 0; i < n; i++)
  {
    arr[i].insert(arr[i].begin(),-1);
    arr[i].push_back(-1);
  }
  
  vector<int> boundaryRow(m+2, -1);

  arr.insert(arr.begin(),boundaryRow);
  arr.push_back(boundaryRow);
 
  int s = 0, e = n+2;

  cout<<"inside"<<endl;
  while(s<=e)
 {
     int mid = s + (e-s)/2;
     cout<<"mid - "<<mid<<endl;
     int maxx = maxElem(arr[mid],m+2);
     cout<<"max = "<<maxx<<endl;
     int top = mid-1>=0 ? arr[maxx][mid]:-1;
     int bottom = mid+1<n ? arr[maxx+1][mid]:-1;
 
      cout<<"current = "<<arr[maxx][mid]<<endl;
    if (arr[maxx][mid]>top && arr[maxx][mid]>bottom )
    { 
      cout<<arr[maxx][mid]<<endl;
       return {maxx-1,mid-1};
    } 
   else if( arr[maxx][mid]<bottom) {
    s = mid+1;
   } else{
     e = mid-1;
   }
 }
 return {-1}; 
} 



int main()
{
  // vector<vector<int>> arr = {{10,20,15},{21,30,14},{7,16,32}};
  vector<vector<int>> arr = {{1,4},{3,2}}; 
  vector<int> ans =  peak_element(arr);
  for(auto it:ans){
    cout<<it<<" ";
  }
  return 0;
}
