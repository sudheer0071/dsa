#include <iostream>
#include <vector>
using namespace std;

// Brute Force
int totalWater0(vector<int> &arr)
{
  int n = arr.size();
  int waterTrapped = 0;
  for (int i = 0; i < n; i++)
  {
    int j = i;
    int leftMax = 0, rightMax = 0;
    while (j >= 0)
    {
      leftMax = max(leftMax, arr[j]);
      j--;
    }
    j = i;
    while (j < n)
    {
      rightMax = max(rightMax, arr[j]);
      j++;
    }
    waterTrapped += min(leftMax, rightMax) - arr[i];
  }
  return waterTrapped;
}

// Better Approach - prefixMax and suffixMax
int prefixMax(vector<int> &arr, int x)
{
  int pref[arr.size()];
  pref[0] = arr[0];
  for (int i = 1; i < arr.size(); i++)
  {
    pref[i] = max(pref[i - 1], arr[i]);
  }
  return pref[x];
}

int suffixMax(vector<int> arr, int x)
{
  int n = arr.size();
  int suf[n];
  suf[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = max(suf[i + 1], arr[i]);
  }
  return suf[x];
}

int totalWater1(vector<int> &arr)
{
  int n = arr.size();
  int total = 0;

  int pref[n], suf[n];
  pref[0] = arr[0];
  for (int i = 1; i < n; i++)
    pref[i] = max(pref[i - 1], arr[i]);

  suf[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
    suf[i] = max(suf[i + 1], arr[i]);

  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] < pref[i] && arr[i] < suf[i])
    {
      total += min(pref[i], suf[i]) - arr[i];  
    }
  }
 
  return total;
}


// Optimal Approach - 2 Pointers
int totalWater2(vector<int> &arr)
{ 
  int n = arr.size();
  int leftMax=0, righMax=0, total = 0;
  int l = 0, r = n - 1;

  while (l <= r)
  {
    if (arr[l] <= arr[r])
    {
      if (leftMax >= arr[l])
        total += leftMax - arr[l];
      else
        leftMax = arr[l];
      l++;
    }
    else
    {
      if (righMax >= arr[r])
        total += righMax - arr[r];
      else
        righMax = arr[r];
      r--;
    }
  }
  return total;
}

int main()
{
  vector<int> a = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  cout << totalWater2(a);
  return 0;
}
