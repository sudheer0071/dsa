#include <iostream>
using namespace std;

int peak(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2; 
    while (s <e) {
        if (arr[mid]<arr[mid+1])
        { 
          s = mid + 1;
        }
        else
        {
          e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}


int main()
{
  // int a[6] = {2,4,6,9,14,20};
  // int b[5] = {0,10,8,5,3};
  int b[5] = {7, 9, 10, 2, 3};
 
  int ind = peak(b, 5);
  cout << "Index of peak element is :" << ind << endl;
  return 0;
}
