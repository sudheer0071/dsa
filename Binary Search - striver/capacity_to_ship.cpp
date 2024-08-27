#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int capacity(int arr[], int n, int day){
   
   int maxx = *max_element(arr, arr + n);
 int sum = 0;
  for (int i = 0; i < n; i++) sum+=arr[i];
  

   for (int i = maxx; i < sum; i++)
   {
    int d=0, sum2=0;
     for (int j = 0; j < n; j++)
     {
       if(sum2<i){
        sum2+=arr[j];
        cout<<"sum = "<<sum2<<endl;
        d++;
       } else{
         sum2=arr[j];
         d++;
       }
     }
     cout<<"d = "<<d<<endl;
     if (d==day)
     {
      return i;
     }
     
     
   }
   return -1;
}

int main()
{
  int arr[8] = {5,4,5,2,3,4,5,6};
  cout<<capacity(arr, 8, 5);
  return 0;
}
