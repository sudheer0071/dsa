#include <iostream>
#include <vector>
using namespace std;

// Brute Force
int buy_sell(int arr[], int n){
  int maxpro = 0;
 for (int i = 0; i < n; i++)
 {
  for (int j = i+1; j < n; j++)
  {
    if (arr[i]<arr[j])
    {
      maxpro = max(arr[j]-arr[i], maxpro);
    }
    
  }
 }
  return  maxpro;
}


// Maybe Better?
// int buy_sell(int arr[], int n){
//   int buy= INT16_MAX, sell = INT16_MIN;
//   for (int i = 0; i < n; i++)
//   {
//     if(arr[i]<buy) { 
//       buy=arr[i];
//     }
//   }
// int idx=0;
// for (int i = 0; i < n; i++)
// {
//   if(arr[i]==buy){
//    idx=i;
//    break;
//   }
// }
//   cout<<"buy = "<<buy<<endl;
//   for (int i =idx; i < n; i++)
//   {
//     if ( arr[i]>sell)
//     { 
//        sell=arr[i];
//     } 
//   }
//   cout<<"idx = "<<idx <<endl;
//   cout<<"sell = "<<sell<<endl;
//   int profit = sell-buy;
//   return  profit;
// }

int main()
{
  int arr[6] = {2,4,1};
  cout<<buy_sell(arr,3);
  return 0;
}
