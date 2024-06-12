#include <iostream>
#include <vector>
using namespace std;
 
// without hashing  
template<size_t N>
int occurance(int (&arr)[N] ){  
  int maxEle = 0; int minEle = 0;
  int maxFreq = 0; int minFreq = N;
  
  bool visited[N] = {false}; 
  for (int i = 0; i < N; i++)
  {  
   if (visited[i]) continue;
    
  int count = 0;
     for (int j = 0; j <  N ; j++)
  {
     if (arr[j] == arr[i])
     {
    visited[j] = true;  
      count++;
     }
  } 
    cout << "occurrence of " << arr[i] << " is " << count << endl;
  }  
}

int main()
{
  int arr[6] =  {10,5,10,15,10,5};
  occurance(arr);
  return 0;
} 



// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin>>arr[i];
//   }
  
//   // pre computation
//   int hash[12] = {0};
//   int count = 0;
 

//   for (int i = 0; i < n; i++)
//   {
//     hash[arr[i]] = hash[arr[i]]+1;
//   } 

//   int q;
//   cin>>q;
//   while (q--)
//   {
//     int n;
//     cout<< "occurence of ";
//     cin >>n;
//     // prefetch
//     cout<<hash[n]<<endl;
//   }
  
// for (int i = 0; i < sizeof(hash); i++)
// {
//   cout<<hash[i]<<" ";
// }

//   return 0;
// }
