#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canWePlace(int arr[], int d, int k){

}

// Brute Force Approach - Linear Search
int min_max_dist(int arr[], int n, int k){
  sort(arr, arr+n);
  int limit = arr[n-1] - arr[0];
  cout<<limit<<endl;
  for (int i = 1; i < limit; i++)
  {
    int count = 1; int last = arr[0];
      for (int j = 1; j < n; j++)
      {
        if (arr[j]-last>=i)
        {
          count++;
          last = arr[j];
        }
        if(count>=k) break;
      }
      if(count<k) return i-1;
  }
  return limit;
}

int main()
{
  // int arr[6] ={0,3,4,7,10,9};
  int arr[6] = {4,2,1,3,6};
  cout<<min_max_dist(arr, 5, 2);
  return 0;
}
