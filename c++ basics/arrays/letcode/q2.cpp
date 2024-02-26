#include <iostream>
using namespace std;
 
int main()
{ 
  int arr[5] = {1,1,2,3,4};
  int counts[100] = {};
   for (int i = 0; i < 5; i++) {
        int num = arr[i];
        counts[num]++;
       cout<< counts[i];
    }
  return 0;
}
