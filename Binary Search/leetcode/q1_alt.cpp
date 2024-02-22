#include <iostream>
using namespace std;

void first_and_last_occ(int arr[], int n, int k){
  for (int i = 0; i < n; i++)
  {
    if (arr[i]==k)
    {
      cout<<i<<" ";
      break;
    }
  }
  
  for (int i = n-1; i <= n; i--)
  {
    if (arr[i]==k)
    {
      cout<<i<<" ";
      break;
    }
    
  }
  
}
 
int main()
{
  //  int a[6] = {2,9,9,9,14,20};
   int a[6] = {0,1,2,2,2,3};

  // int ind = binaraSearch(a,6, 4);
  cout<< "occurence is :" << endl;
  first_and_last_occ(a, 6, 2);
  return 0;
}
