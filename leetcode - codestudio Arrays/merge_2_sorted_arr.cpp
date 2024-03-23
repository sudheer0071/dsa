#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
  int i = 0, j = 0;
  int k = 0;
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      arr3[k] = arr1[i];
      k++;
      i++;
    }
    else
    {
      arr3[k] = arr2[j];
      k++;
      j++;
    }
  }
  //  copy elements of k in in remaining array of n size
  while (i < n)
  {
    arr3[k] = arr1[i];
    k++;
    i++;
  }
  //  copy elements of k in in remaining array of m size
  while (j < m)
  {
    arr3[k] = arr2[j];
    k++;
    j++;
  }
}

void print(int ans[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main()
{

  int a[5] = {1, 3, 5, 7, 9};
  int b[7] = {2, 4, 6, 8, 10, 11, 23};
  int c[12] = {0};
  merge(a, 5, b, 7, c);
  print(c, 12);
  return 0;
}
