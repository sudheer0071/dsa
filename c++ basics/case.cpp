#include <iostream>
using namespace std;
 
int main()
{
  char a ;
  cout << "Enter anything: ";
  cin >> a;

  if (a >= 'a' && a<='z'){

      cout << "\nThis is lowercase " << a;
  }

  else if (a >= 'A' && a<='Z'){

      cout << "\nThis is uppercase " << a;
  }
  else{
      cout << "\nThis is numeric " << a;
  }
  return 0;
}
