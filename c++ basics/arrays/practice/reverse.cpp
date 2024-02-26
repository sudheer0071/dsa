 #include <iostream>
 using namespace std;
  
void reverse(int arr[], int n){
  for (int i = 0; i < n/2; i++)
  {
    swap(arr[i], arr[n-i-1]);
  }
  
}

void printArray(int arr[], int n){
  for (int i = 0; i <n; i++)
  {
        cout<<arr[i]<<" ";
     
  }
  cout << endl;
} 

 int main()
 {
   int arr[5] = {5,6,7,3,2} ;
   int arr1[6] = {5,6,7,3,2,9} ;
// { int arr1[6] = {5,6,7,3,2} ;
// reverse(arr, 5);
// printArray(arr, 5);

reverse(arr1, 6);
printArray(arr1, 6);
// cout << ans << endl;
   return 0;
 }
 