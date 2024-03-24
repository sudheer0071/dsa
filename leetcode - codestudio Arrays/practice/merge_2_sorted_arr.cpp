#include <iostream>
#include <vector>
using namespace std;

void mer2_sorted(int arr1[], int n, int arr2[], int m, int arr3[])
{
   int i = 0;
   int j = 0;
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
   while (i < n)
   {
      cout << "i: " << i << endl;
      arr3[k] = arr1[i];
      k++;
      i++;
   }

   while (j < m)
   {
      cout << "j: " << j << endl;
      arr3[k] = arr2[j];
      k++;
      j++;
   }
}

void print(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main()
{
   int a[5] = {1, 4, 6, 8, 13};
   int b[4] = {2, 3, 5, 7};
   int c[10] = {0};

   mer2_sorted(a, 5, b, 4, c);
   print(c, 9);
   return 0;
}
