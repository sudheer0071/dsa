#include <iostream>
using namespace std;
 
int main()
{
  int n;
  int hundred, fifty, twenty, ten, coin;
  cin >> n;

  switch (1)
  {
  case 1:   hundred = n/100;
            n = n - hundred*100;
            cout << "100 Rupee notes: "<< hundred << endl;
              
  case 2:   fifty = n/50;
            n = n - fifty*50;
            cout << "50 Rupee notes: "<< fifty << endl;
              
  case 3:   twenty = n/20;
            cout << "20 Rupee notes: "<< twenty << endl;
            n = n - twenty*20;
              
  case 4:   ten = n/10;
            n = n - ten*10; 
            cout << "10 Rupee notes: "<< ten << endl;
              
  case 5:   
            cout << "1 Rupee coin: "<< n << endl;
  
  default: 
    break;
  }
  return 0;
}
