

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Brute Force Approach  
long double minmise_max_dist(int arr[], int n, int k){
  vector<int> howMany(n-1,0);
  for (int i = 0; i < k; i++)
  {
    int maxx = -1, maxxIdx = -1;
    for (int j = 0; j < n; j++)
    {
       int diff = arr[j+1]-arr[j];
       int sectorLength = diff/ (long double) (howMany[j]+1);

       if(maxx<sectorLength){
        maxx = sectorLength;
        maxxIdx = j;
       }
    }
    howMany[maxxIdx]++;
  }
  
  int maxAns = -1;
  for (int i = 0; i < n-1; i++)
  {
    int diff = (arr[i+1] - arr[i])/(howMany[i] + 1);
    maxAns = max(maxAns, diff);
  }
  return maxAns;
} 

int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5};
    int arr[5] = {1,13,17,23};
    int k = 5;
    long double ans = minmise_max_dist(arr,4, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

