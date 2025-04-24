#include <iostream>
#include <vector>
#include <stack>

using namespace std;
 
int largest_area(vector<int> arr){
  stack <int> st;
  int n = arr.size();
  int maxArea =0;

  for (int i = 0; i < n; i++)
  {
    while (!st.empty() && arr[st.top()] > arr[i])
    {
      int nse = i;
      int ele = st.top(); st.pop();
      int pse = st.empty()?-1:st.top();
      maxArea = max(maxArea, arr[ele]*(nse - pse -1));
      
    }
st.push(i);
  }

  while (!st.empty())
  {
   int  nse = n;
    int ele = st.top();st.pop();
    int pse = st.empty()?-1:st.top();
    maxArea = max(maxArea, arr[ele] *(nse - pse -1));
  }
  
  return maxArea;
}

int main()
{
  vector<int> a = {2,1,5,6,2,3};
  cout<<largest_area(a);
  return 0;
}
