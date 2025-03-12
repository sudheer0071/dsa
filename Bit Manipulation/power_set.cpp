#include <iostream>
#include <vector>
using namespace std;
 
vector <vector<int>> powerSet( vector<int > & arr){
  vector <vector<int>> ans;
   int n = arr.size();
   for (int nums = 0; nums <=(1<<n )-1 ; nums++)
   {
    vector<int> list;
     for (int i = 0; i <=n-1; i++)
     {
        if(nums & (1<<i)){
            list.push_back(arr[i]);
        }
     }
     ans.push_back(list);
   } 
  return ans;
}

int main()
{
  vector<int> a  = {1,2,3};
  vector <vector<int>> ans = powerSet(a);

  for (auto a : ans) {
    for (auto c : a) {
        cout << c << " ";  // Fixed the 'cout' syntax
    }
    cout << endl;
}

  return 0;
}
