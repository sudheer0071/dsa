#include <iostream>
#include <vector>
#include <map>  
// #include <bits/stdc++.h>
using namespace std;

// Brute force Approach - store the count for each element by iterating twice 

// Better Approach - By using Hash maps
// int majority_Element(int arr[], int n){
//   // int max = *max_element(arr, arr+n)+1; 
//   // int hash[max] = {0};
//   map <int, int> map;
//   for (int i = 0; i < n; i++)
//   {
//     map[arr[i]]++;
//   }  
//   // for (int i = 0; i <max; i++)
//   for(auto it:map)
//   { 
//     if (it.second>n/2) {
//       return it.first;
//     } 
//   } 
// return -1;
// }

// Optimal Approach - Moore's Voting algo.
int majority_Element(int arr[], int n){
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = arr[i];
        }
        else if (el == arr[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}
 
int main()
{
//  int arr[7] = {2,2,1,1,1,2,2};
//  int arr[3] = {3,2,3};
 int arr[10] = {4,4,2,4,3,4,4,3,2,4};
 cout<<majority_Element(arr,10); 
  return 0;
}
 