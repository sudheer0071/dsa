

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
 
// Brute Force Approach  
// long double minmise_max_dist(int arr[], int n, int k){
//   vector<int> howMany(n-1,0);
//   for (int i = 0; i < k; i++)
//   {
//     int maxx = -1, maxxIdx = -1;
//     for (int j = 0; j < n; j++)
//     {
//        int diff = arr[j+1]-arr[j];
//        int sectorLength = diff/ (long double) (howMany[j]+1);
//        if(maxx<sectorLength){
//         maxx = sectorLength;
//         maxxIdx = j;
//        }
//     }
//     cout<<"max dist = "<<maxx<<endl;
//     howMany[maxxIdx]++;
//     for(auto it:howMany){
//       cout<<it<<" ";
//     }
//     cout<<endl;
//   } 
//   int maxAns = -1;
//   for (int i = 0; i < n-1; i++)
//   {
//     int diff = (arr[i+1] - arr[i])/(howMany[i] + 1);
//     maxAns = max(maxAns, diff);
//   }
//   return maxAns;
// } 


// Better Approach - Using Heap Data Structure  
// long double minmise_max_dist(int arr[], int n, int k){
//   vector<int> howMany(n-1,0);
//   priority_queue<pair<long double, int>> pq; 
//   for (int i = 0; i < n-1; i++) pq.push({arr[i+1]-arr[i],i}); 
//   for (int i = 0; i < k; i++)
//   {
//       auto tp = pq.top(); pq.pop();
//       int idx = tp.second;
//       howMany[idx]++;
//       long double initialDiff = 3;
//       long double newSectionLen = (arr[idx+1]-arr[idx] )/(long double) (howMany[idx]+1);
//       pq.push({newSectionLen,idx});
//   }
//   return pq.top().first;
// } 

// Optimal Approach - Using Binary Search (not usual binary search)  

int numberOfGasStationsRequired(int arr[],int n, long double dist){
    int count = 0;
    for (int i = 1; i < n; i++)
    {
      int numberInbtw = (arr[i]- arr[i-1])/dist;
      if((arr[i]-arr[i-1])/dist == numberInbtw * dist) {
        numberInbtw--;
      }
      count+=numberInbtw;
    } 
    return count;
}

long double minmise_max_dist(int arr[], int n, int k){
  long double e = 0;
  for (int i = 0; i < n-1; i++) e =  max(e,(long double)(arr[i+1]-arr[i]));
  long double s = 0 ;
  long double diff = 1e-6;
  while (e-s > diff)
  {
    long double mid = s + (e-s)/2; 
    if (numberOfGasStationsRequired(arr,n,mid)>k)
    {
      s = mid;
    }else{ 
      e = mid;
    } 
  }
  return e;
} 



int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    // int arr[5] = {1,13,17,23}; 
    int k = 1;
    long double ans = minmise_max_dist(arr,5, 4);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

