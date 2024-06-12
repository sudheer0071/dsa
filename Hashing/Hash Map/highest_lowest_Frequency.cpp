#include <iostream>
#include <vector>
#include <map>
// #include <unordered_map>

using namespace std;
 
 // brute force approach
// int highLowFreq(int arr[], int n){
//   int hfreq=0, lfreq=n, high = 0, low=0;
//   bool visited[n] = {false};
//   for (int i = 0; i < n; i++)
//   {
//     if(visited[i]) continue;

//     int count = 0;
//     for (int j = 0; j < n; j++)
//     {
//       if (arr[j]==arr[i])
//       {
//         count++;
//         visited[j]=true;
//       } 
//     }
//       if (hfreq<count)
//       {
//         high = arr[i];
//         hfreq = count;
//       }

// if (lfreq>count)
// {
//   low= arr[i];
//   lfreq = count;
// } 
//   }
//     cout << "highest freq: " << high << endl;
//     cout << "lowest freq:  " << low << endl;
  
//  }

// by using Hash Maps

int highLowFreq(int arr[], int n){
  
   map<int, int> map;
  for (int i = 0; i < n; i++)
  {
    map[arr[i]]++;
  }
  
  int hfreq=0, lfreq=n, high = 0, low=0;
  for (auto it:map)
  {  
    if (hfreq<it.second)    
    {
      high = it.first;
      hfreq = it.second;
    }
    if (lfreq>it.second)
    {
      low = it.first;
      lfreq = it.second;
    }
    
  }
    cout << "highest freq: " << hfreq << endl;
    cout << "lowest freq:  " << lfreq << endl;
  
}

int main()
{
 int arr[6] = {10,5,10,15,10,5};

  highLowFreq(arr , 6);
  return 0;
}
