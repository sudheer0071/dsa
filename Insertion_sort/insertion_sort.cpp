 #include <iostream>
 using namespace std;
  
  
int insertion_sort(int arr[], int n){
  for (int i = 0; i < n-1; i++)
  {
    int temp = arr[i];
    int j = i-1; 
    for (;j >= 0; j--)
    {
      if (temp<arr[j])
      {
        // shift
        arr[j+1]=arr[j];
      }
      else
      {
        break;
      }   
    }
    arr[j+1]=temp;
  }
}
int printarray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<< " ";
  }
  cout<<endl;
}

int main()
{
  int a[5] = {5,3,1,6,8};
  cout<<"Before sort: ";
   printarray(a,5); 
   insertion_sort(a,5);
  cout<<"After sort: ";
  printarray(a,5);
  return 0;
}
