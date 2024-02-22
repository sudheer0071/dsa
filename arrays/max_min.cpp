#include <iostream>
using namespace std;
 
int getMax(int num[], int n){
  int max = num[0];// or we can use INT_MAX;
  for (int i = 0; i < n; i++)
  {
     if (num[i] > max){
      // max = max(max, num[i]);
      max = num[i];
     }
  }
  return max;
  
}

int getMin(int num[], int n){
  int min = num[0]; // or we can use INT_MIN;
  for (int i = 0; i < n; i++)
  {
     if (num[i] < min){
      min = num[i];
     }
  }
  return min;
  
}

int main()
{
  int size;
  cin >> size;

  int num[100];
  
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];

  }
  
cout<<"Max number is " << getMax(num, size)<< endl;
cout<<"Min number is " << getMin(num, size);

  return 0;
} 