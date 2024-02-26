#include <iostream>
using namespace std;
 
int uniquue(int arr[], int n){
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans = ans^arr[i];
  }
  return ans;
}


int main()
{
  int a[7]={1,1,6,7,6,7,5};
    int size=7,counter=0;


    for (int i=0; i<size; i++)
    {
        counter=0;
        for ( int j = 0; j<size; j++)
        {

            if(a[i]==a[j])
            {
                counter++;
            }
        }
        if (counter==2){
            continue;
        }
        else{
            cout<<a[i];
            }

    }          
  return 0;
}
