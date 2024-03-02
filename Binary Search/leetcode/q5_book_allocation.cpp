#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;

bool is_possible(int arr[], int n, int m, int mid)
{
  int studentCount = 1;
  int pagesum = 0;

  for (int i = 0; i < n; i++)
  {
    if (pagesum + arr[i] <= mid)
    {
      pagesum += arr[i];
    }
    else
    {
      studentCount++;
      if (studentCount > m || arr[i] > mid)
      {
        return false;
      }
      pagesum = arr[i];
    }
  }
  return true;
}

int allocate_book(int arr[], int n, int m)
{
  int s = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  int e = sum;
  int mid = s + (e - s) / 2;
  int ans;
  while (s <= e)
  {
    if (is_possible(arr, n, m, mid))
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main()
{
  int b[5] = {10, 20, 30, 40};
  cout << allocate_book(b, 4, 2);
  return 0;
}
