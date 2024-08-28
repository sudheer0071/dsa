#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force Approach - Linear Search
// int capacity(int arr[], int n, int day){   
//    int maxx = *max_element(arr, arr + n);
//  int sum = 0;
//   for (int i = 0; i < n; i++) sum+=arr[i];
// //  cout<<"sum = "<<sum<<endl;
//   if(day==1) return sum;
//    for (int i = maxx; i < sum; i++)
//    {
//     cout<<"----------- "<<i<<"th --------- day"<<endl;
//     int d=1, sum2=0;
//      for (int j = 0; j < n; j++)
//      {
//         cout<<"sum outside = "<<sum2<<endl;
//        if(sum2+arr[j]<=i){
//         sum2+=arr[j]; 
//        } else{
//         d++;
//         cout<<"sum = "<<sum2<<endl;
//         sum2=arr[j];
//        }
//      }
//      cout<<"d = "<<d<<endl;
//      if (d<=day)
//      {
//       return i;
//      } 
//    }
//    return -1;
// }

// Optimal Approach - Binary Search
int capacity(int arr[], int n, int day){   
   int maxx = *max_element(arr, arr + n);
 int sum = 0;
  for (int i = 0; i < n; i++) sum+=arr[i];
//  cout<<"sum = "<<sum<<endl;
  if(day==1) return sum;
   int s = maxx, e = sum;

   while(s<=e)
   {
    int mid = s + (e-s)/2;
    // cout<<"----------- "<<mid<<"th --------- day"<<endl; 
    int d=1, sum2=0;
     for (int j = 0; j < n; j++)
     {
        // cout<<"sum outside = "<<sum2<<endl;
       if(sum2+arr[j]<=mid){
        sum2+=arr[j]; 
       } else{
        d++;
        // cout<<"sum = "<<sum2<<endl;
        sum2=arr[j];
       }
     }
    //  cout<<"d = "<<d<<endl;
     if (d<=day)
     {
      e = mid-1;
     } else{
      s = mid +1;
     }
   }
   return s;
}

int main()
{
  // int arr[8] = {5,4,5,2,3,4,5,6};
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  cout<<capacity(arr, 10, 1);
  return 0;
}
