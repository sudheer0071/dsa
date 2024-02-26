#include <iostream>
using namespace std;
 
int main()
{
  int n;
  cin >> n;
  switch (n)
  {
  case 1:
    cout << " FIrst \n";
  case 2:
    cout << " second \n";
    // break;
  case 3:
    cout << " third \n";
  case 4:
    cout << " fourth \n";
    break;
  case 5:
    cout << " fifth \n";
  case 6:
    cout << " sixth \n";
  
  default:
    cout << " default \n";
  }
  return 0;
}
