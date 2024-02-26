#include <iostream>
using namespace std;
 
void reverse(int dum[], int n){
  int s = 0;
  int e = n - 1;

  while (s<=e)    
  {
    int temp = dum[s];
    dum[s] = dum[e];
    dum[e] = temp;
    s++;
    e--;
  }
  
} 


void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] <<" ";
  }
  cout << endl;
}


int main()
{
int arr[5] = {1,2,3,4,5};
int brr[6] = {1,2,3,4,5,6};

reverse(arr, 5);
reverse(brr, 6);

printArray(arr, 5);
printArray(brr, 6);


return 0;
}

